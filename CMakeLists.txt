project("PIC18 APP")
cmake_minimum_required(VERSION 3.22)
# set up the Microchip cross toolchain
set(XC8_ROOT /Applications/microchip/xc8/v2.40/)
set(CMAKE_EXECUTABLE_SUFFIX_C hex)
set(CMAKE_C_STANDARD 11)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# set the default MCU model
set(MICROCHIP_MCU PIC18F4550)
add_executable(app
        src/main.c
        src/motors.c
        src/utils.c
        include/config.h
        include/utils.h
        include/peripherals/motors.h)
target_include_directories(app PRIVATE
        include
        ${XC8_ROOT}/pic/include/proc/pic18f4550.h
        ${XC8_ROOT}/pic/include
        ${XC8_ROOT}/pic/include/c99
        )
