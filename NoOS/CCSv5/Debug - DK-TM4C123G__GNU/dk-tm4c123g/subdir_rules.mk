################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
dk-tm4c123g/startup_ccs.o: C:/ti/Connectivity/CC256X\ BT/CC256x\ M4\ Bluetopia\ SDK/v1.2\ R2/Cortex_M4/Sample/HFPDemo/NoOS/startup/dk_tm4c123g/startup_ccs.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Compiler'
	"C:/ti/ccsv6/tools/compiler/gcc-arm-none-eabi-4_9-2015q3/bin/arm-none-eabi-gcc.exe" -c -mcpu=cortex-m4 -march=armv7e-m -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DPART_TM4C123GH6PGE -I"C:/ti/ccsv6/tools/compiler/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include" -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -Wall -MD -std=c99 -c -MMD -MP -MF"dk-tm4c123g/startup_ccs.d" -MT"dk-tm4c123g/startup_ccs.d" -o"$@" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


