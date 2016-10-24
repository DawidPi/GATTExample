################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
dk-tm4c123g/startup_ccs.obj: C:/ti/Connectivity/CC256X\ BT/CC256x\ M4\ Bluetopia\ SDK/v1.2\ R2/Cortex_M4/Sample/HFPDemo/NoOS/startup/dk_tm4c123g/startup_ccs.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv6/tools/compiler/arm_15.12.3.LTS/bin/armcl" --cmd_file="C:\ti\Connectivity\CC256X BT\CC256x M4 Bluetopia SDK\v1.2 R2\Cortex_M4\BuildScripts\TivaWarePath_DK_TM4C123G_CCS_NEW.txt"  -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me -g --include_path="C:/ti/ccsv6/tools/compiler/arm_15.12.3.LTS/include" --include_path="C:/ti/Connectivity/CC256X BT/CC256x M4 Bluetopia SDK/v1.2 R2/Cortex_M4/Sample/HFPDemo/NoOS" --include_path="C:/ti/Connectivity/CC256X BT/CC256x M4 Bluetopia SDK/v1.2 R2/Cortex_M4/Sample/HFPDemo" --include_path="C:/ti/Connectivity/CC256X BT/CC256x M4 Bluetopia SDK/v1.2 R2/Cortex_M4/Hardware" --include_path="C:/ti/Connectivity/CC256X BT/CC256x M4 Bluetopia SDK/v1.2 R2/Cortex_M4/Hardware/dk-tm4c123g" --include_path="C:/ti/Connectivity/CC256X BT/CC256x M4 Bluetopia SDK/v1.2 R2/Cortex_M4/Bluetopia/btpskrnl/NoOS" --include_path="C:/ti/Connectivity/CC256X BT/CC256x M4 Bluetopia SDK/v1.2 R2/Cortex_M4/Bluetopia/hcitrans/NoOS" --include_path="C:/ti/Connectivity/CC256X BT/CC256x M4 Bluetopia SDK/v1.2 R2/Cortex_M4/Bluetopia/btpsvend" --include_path="C:/ti/Connectivity/CC256X BT/CC256x M4 Bluetopia SDK/v1.2 R2/Cortex_M4/Bluetopia/btvs/include" --include_path="C:/ti/Connectivity/CC256X BT/CC256x M4 Bluetopia SDK/v1.2 R2/Cortex_M4/Bluetopia/include" --include_path="C:/ti/Connectivity/CC256X BT/CC256x M4 Bluetopia SDK/v1.2 R2/Cortex_M4/Bluetopia/profiles/hfp/include" --include_path="C:/ti/Connectivity/CC256X BT/CC256x M4 Bluetopia SDK/v1.2 R2/Cortex_M4/Bluetopia/profiles/gatt/include" --define=PART_TM4C123GH6PGE --define=TARGET_IS_BLIZZARD_RB1 --define=DEBUG --define=DEBUG_ENABLED --define=DEBUG_ZONES=DBG_ZONE_ANY --define=__SUPPORT_CC256XB_PATCH__ --diag_warning=225 --display_error_number --diag_wrap=off --printf_support=full --preproc_with_compile --preproc_dependency="dk-tm4c123g/startup_ccs.d" --obj_directory="dk-tm4c123g" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


