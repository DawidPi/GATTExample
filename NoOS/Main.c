
#include <HCITypes.h>
#include <GATTAPI.h>
#include <SDPAPI.h>
#include "../Main.h"                /* Main application header.                  */
#include "HAL.h"                 /* Function for Hardware Abstraction.        */
#include "HALCFG.h"              /* HAL Configuration Constants.              */

int configureBTStack();

void configureGATT(int bluetoothStackID);

int main(void)
{
   /* Configure the hardware for its intended use.                      */
   HAL_ConfigureHardware(1);

   printf("HardwareConfigured\n");

   int btStackId = configureBTStack();

    configureGATT(btStackId);

   while(1)
   {
      HAL_LedToggle(0);

      BTPS_Delay(100);
   }
}

void errorFunc() {
    while(1);
}

 void gattConnectionCallback(unsigned int BluetoothStackID, GATT_Connection_Event_Data_t *GATT_Connection_Event_Data,
                             unsigned long CallbackParameter){
     printf("GATT connection callback called!");
 }


void assertGATTInitialized(int result) {
    if(result == 0){
        printf("GATT configured!\n");
        return;
    }

    printf("GATT configuration failed!\n");
    errorFunc();
}

void assertRegisterServiceOK(int result) {
    if(result >= 0){
        printf("Service registration successful!\n");
        return;
    }

    printf("Service registration failed : %d!\n", result);
    errorFunc();
}

void GATTServiceCallback(unsigned int stackId, GATT_Server_Event_Data_t *GATT_Server_Event_Data,
                         unsigned long CallbackParameter){
    printf("Bluetooth callback called!\n");
}


GATT_Primary_Service_128_Entry_t serviceUUID;
GATT_Characteristic_Declaration_128_Entry_t characteristicDescription;
GATT_Characteristic_Value_128_Entry_t characteristicValue;
UUID_128_t characteristicUUID;
UUID_128_t valueUUID;

void configureGATT(int bluetoothStackID) {
    assertGATTInitialized(GATT_Initialize(bluetoothStackID, GATT_INITIALIZATION_FLAGS_SUPPORT_LE, gattConnectionCallback, 0));


    GATT_Service_Attribute_Entry_t serviceTable[3];
    GATT_Attribute_Handle_Group_t handleGroupResult;
    handleGroupResult.Ending_Handle=0;
    handleGroupResult.Starting_Handle=0;

    serviceUUID.Service_UUID.UUID_Byte0=10; // must be greater than 0, so it does not collide with standard UUIDS
    serviceUUID.Service_UUID.UUID_Byte2=1; // base for standard UUIDS
    serviceTable[0].Attribute_Entry_Type = aetPrimaryService128;
    serviceTable[0].Attribute_Flags = GATT_ATTRIBUTE_FLAGS_READABLE;
    serviceTable[0].Attribute_Value = &serviceUUID;

    characteristicUUID.UUID_Byte0=11;
    characteristicUUID.UUID_Byte2=1;
    characteristicDescription.Characteristic_Value_UUID=characteristicUUID;
    characteristicDescription.Properties=0; // no idea what this is
    serviceTable[1].Attribute_Entry_Type = aetCharacteristicDeclaration128;
    serviceTable[1].Attribute_Flags = GATT_ATTRIBUTE_FLAGS_READABLE;
    serviceTable[1].Attribute_Value = &characteristicDescription;
    valueUUID.UUID_Byte0=12;
    valueUUID.UUID_Byte2=1;
    bool characteristicRawValue=false;
    characteristicValue.Characteristic_Value_UUID=valueUUID;
    characteristicValue.Characteristic_Value_Length=1;
    characteristicValue.Characteristic_Value = &characteristicRawValue;
    serviceTable[2].Attribute_Entry_Type = aetCharacteristicValue128;
    serviceTable[2].Attribute_Flags = GATT_ATTRIBUTE_FLAGS_READABLE_WRITABLE;
    serviceTable[2].Attribute_Value = &characteristicValue;

    int serviceID = GATT_Register_Service(bluetoothStackID, GATT_SERVICE_FLAGS_LE_SERVICE,
                          sizeof(serviceTable)/sizeof(GATT_Service_Attribute_Entry_t), serviceTable,
                                         &handleGroupResult, GATTServiceCallback, 0);
    assertRegisterServiceOK(serviceID);
}


void printCharacter(char c){
    printf("%c", c);
}

void assertBTStackOK(int bluetoothStackID) {
    printf("Bluetooth stack ID : %d\n", bluetoothStackID);
    if(bluetoothStackID == 0){
        printf("Bluetooth stack initialization error!\n");
        errorFunc();
    }
}

void assertBLEEnabled(int feature) {
    if(feature == 0){
        printf("BLE failed to be enabled!\n");
        errorFunc();
    }
    printf("BLE succesfully Enabled\n");
}

void printDeviceAddress(int stackId) {
    BD_ADDR_t localBtAddress;
    int result = GAP_Query_Local_BD_ADDR(stackId, &localBtAddress);

    if(result == 0)
        printf("0x%02X%02X%02X%02X%02X%02X \n", localBtAddress.BD_ADDR5, localBtAddress.BD_ADDR4, localBtAddress.BD_ADDR3,
           localBtAddress.BD_ADDR2, localBtAddress.BD_ADDR1, localBtAddress.BD_ADDR0);
    else{
        printf("Getting bluetooth address failed!\n");
        errorFunc();
    }
}

void assertDiscoverableOK(int result) {
    if(result == 0){
        printf("Device set to discverability mode!\n");
        return;
    }

    printf("Discoverability failed!\n");
    errorFunc();
}

void assertLocalNameOK(int result) {
    if(result==0){
        printf("Local name set successfully!\n");
        return;
    }

    printf("Local name set failed!\n");
    errorFunc();
}

void assertConnectableOK(int result) {
    if(result==0){
        printf("Connectability OK!\n");
        return;
    }

    printf("Connectability failed!");
    errorFunc();
}

void assertPairableLEOK(int result) {
    if(result==0){
        printf("Pairability LE set successfully!\n");
        return;
    }

    printf("Pairability LE failed!%d\n",result);
    errorFunc();
}

void onPairRequest(unsigned int BluetoothStackID, GAP_Event_Data_t *GAP_Event_Data, unsigned long CallbackParameter){
    printf("onPairRequest done. eventType: %d\n", GAP_Event_Data->Event_Data_Type);
}

void assertLERemoteAuthenticationOK(int result) {
    if(result==0){
        printf("Remote Authentication set!\n");
        return;
    }

    printf("Remote authentication failed!\n");
    errorFunc();
}

void assertPairableOK(int result) {
    if(result==0){
        printf("Pairable OK!\n");
        return;
    }

    printf("Pairable failed!%d\n", result);
    errorFunc();
}

int configureBTStack() {

    //todo check what the hell is this
    BTPS_Initialization_t btpsInitInfo;
    btpsInitInfo.GetTickCountCallback = HAL_GetTickCount;
    btpsInitInfo.MessageOutputCallback = printCharacter;
    BTPS_Init(&btpsInitInfo);
    printf("Some shit configured\n");

    HCI_DriverInformation_t driverInfo;
    HCI_DRIVER_SET_COMM_INFORMATION(&driverInfo, 1, VENDOR_BAUD_RATE, cpHCILL_RTS_CTS);
    driverInfo.DriverInformation.COMMDriverInformation.InitializationDelay = 100; //todo check if zero works correctly

    int bluetoothStackID = BSC_Initialize(&driverInfo,0);

    assertBTStackOK(bluetoothStackID);
    assertBLEEnabled(BSC_EnableFeature(bluetoothStackID, BSC_FEATURE_BLUETOOTH_LOW_ENERGY));

    printDeviceAddress(bluetoothStackID);

    assertLocalNameOK(GAP_Set_Local_Device_Name(bluetoothStackID, "Bluetooth rulez"));
    assertConnectableOK(GAP_Set_Connectability_Mode(bluetoothStackID, cmConnectableMode));
    assertDiscoverableOK(GAP_Set_Discoverability_Mode(bluetoothStackID, dmGeneralDiscoverableMode, 0));

    assertPairableOK(GAP_Set_Pairability_Mode(bluetoothStackID, pmPairableMode));
    assertLERemoteAuthenticationOK(GAP_Register_Remote_Authentication(bluetoothStackID,onPairRequest, 0));
    //assertPairableLEOK(GAP_LE_Set_Pairability_Mode(bluetoothStackID, lpmPairableMode)); does not support LE? WTF
    //assertLERemoteAuthenticationOK(GAP_LE_Register_Remote_Authentication(bluetoothStackID, onPairRequest, 0));

    return bluetoothStackID;
}


