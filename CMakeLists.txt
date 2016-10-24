CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
PROJECT(GATT)

set(SOURCES
        HFPDemo.c
        HFPDemo.h
        Main.h
        TivaWareLib.c
        NoOS/Main.c
        NoOS/startup/dk_tm4c123g/startup_ccs.c)

set(STACK_DIR "C:/ti/Connectivity/CC256X BT/CC256x M4 Bluetopia SDK/v1.2 R2/Cortex_M4")

include_directories(${PROJECT_NAME} ${STACK_DIR}/Bluetopia/btpskrnl/NoOS)
include_directories(${PROJECT_NAME} ${STACK_DIR}/Bluetopia/btpsvend)
include_directories(${PROJECT_NAME} ${STACK_DIR}/Bluetopia/btvs/include)
include_directories(${PROJECT_NAME} ${STACK_DIR}/Bluetopia/hcitrans/NoOS)
include_directories(${PROJECT_NAME} ${STACK_DIR}/Bluetopia/include)
include_directories(${PROJECT_NAME} ${STACK_DIR}/Bluetopia/profiles/gatt/include)
include_directories(${PROJECT_NAME} ${STACK_DIR}/Bluetopia/profiles/hfp/include)
include_directories(${PROJECT_NAME} ${STACK_DIR}/Hardware)
include_directories(${PROJECT_NAME} ${STACK_DIR}/Hardware/dk-tm4c123g)
include_directories(${PROJECT_NAME} ../)

add_executable(${PROJECT_NAME} ${SOURCES})
