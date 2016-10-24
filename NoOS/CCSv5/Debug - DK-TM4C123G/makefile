################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccsv6/tools/compiler/arm_15.12.3.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./BTPSKRNL.obj" \
"./BTPSVEND.obj" \
"./BTVS.obj" \
"./HAL.obj" \
"./HCITRANS.obj" \
"./HFPDemo.obj" \
"./Main.obj" \
"./TivaWareLib.obj" \
"./dk-tm4c123g/startup_ccs.obj" \
"C:/ti/Connectivity/CC256X BT/CC256x M4 Bluetopia SDK/v1.2 R2/Cortex_M4/Sample/HFPDemo/NoOS/startup/dk_tm4c123g/linker_ccs.cmd" \
$(GEN_CMDS__FLAG) \
-ldriverlib.lib \
-lSS1BTGAT_FP.lib \
-lSS1BTGAT.lib \
-lBluetopia_FP.lib \
-lSS1BTHFP_FP.lib \
-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include dk-tm4c123g/subdir_vars.mk
-include subdir_rules.mk
-include dk-tm4c123g/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
HFPDemo.out \

EXE_OUTPUTS__QUOTED += \
"HFPDemo.out" \


# All Target
all:
	@$(MAKE) --no-print-directory pre-build
	@$(MAKE) --no-print-directory main-build

# Main-build Target
main-build: HFPDemo.out

# Tool invocations
HFPDemo.out: $(OBJS) $(LDS_SRCS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: ARM Linker'
	"C:/ti/ccsv6/tools/compiler/arm_15.12.3.LTS/bin/armcl" --cmd_file="C:\ti\Connectivity\CC256X BT\CC256x M4 Bluetopia SDK\v1.2 R2\Cortex_M4\BuildScripts\TivaWarePath_DK_TM4C123G_CCS_NEW.txt"  -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me -g --define=PART_TM4C123GH6PGE --define=TARGET_IS_BLIZZARD_RB1 --define=DEBUG --define=DEBUG_ENABLED --define=DEBUG_ZONES=DBG_ZONE_ANY --define=__SUPPORT_CC256XB_PATCH__ --diag_warning=225 --display_error_number --diag_wrap=off --printf_support=full -z --stack_size=2000 -m"app_TM4C123GH6PGE_ccs.map" --heap_size=1000 -i"C:/ti/ccsv6/tools/compiler/arm_15.12.3.LTS/lib" -i"C:/ti/ccsv6/tools/compiler/arm_15.12.3.LTS/include" -i"C:/ti/Connectivity/CC256X BT/CC256x M4 Bluetopia SDK/v1.2 R2/Cortex_M4/Bluetopia/lib/ccs/NoOS" -i"C:/ti/Connectivity/CC256X BT/CC256x M4 Bluetopia SDK/v1.2 R2/Cortex_M4/Bluetopia/profiles/HFP/lib/ccs" -i"C:/ti/Connectivity/CC256X BT/CC256x M4 Bluetopia SDK/v1.2 R2/Cortex_M4/Bluetopia/profiles/gatt/lib/ccs" --reread_libs --warn_sections --display_error_number --diag_wrap=off --xml_link_info="HFPDemo_linkInfo.xml" --rom_model -o "HFPDemo.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '
	@$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(EXE_OUTPUTS__QUOTED)
	-$(RM) "BTPSKRNL.d" "BTPSVEND.d" "BTVS.d" "HAL.d" "HCITRANS.d" "HFPDemo.d" "Main.d" "TivaWareLib.d" "dk-tm4c123g\startup_ccs.d" 
	-$(RM) "BTPSKRNL.obj" "BTPSVEND.obj" "BTVS.obj" "HAL.obj" "HCITRANS.obj" "HFPDemo.obj" "Main.obj" "TivaWareLib.obj" "dk-tm4c123g\startup_ccs.obj" 
	-@echo 'Finished clean'
	-@echo ' '

pre-build:
	-C:/ti/Connectivity/CC256X BT/CC256x M4 Bluetopia SDK/v1.2 R2/Cortex_M4/Sample/HFPDemo/NoOS/CCSv5/../../../../BuildScripts/SetTivaWarePath.bat
	-@echo ' '

post-build:
	-@echo 'Convert TI .out file to .bin'
	-"C:/ti/ccsv6/utils/tiobj2bin/tiobj2bin.bat" "HFPDemo.out" "HFPDemo.bin" "C:/ti/ccsv6/tools/compiler/arm_15.12.3.LTS/bin/armofd.exe" "C:/ti/ccsv6/tools/compiler/arm_15.12.3.LTS/bin/armhex.exe" "C:/ti/ccsv6/utils/tiobj2bin/mkhex4bin.exe"
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: main-build pre-build post-build

-include ../makefile.targets

