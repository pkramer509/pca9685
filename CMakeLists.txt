set(CMAKE_LEGACY_CYGWIN_WIN32 0) # Remove when CMake >= 2.8.4 is required
cmake_minimum_required (VERSION 2.6)

project (PCA9685_Test C)
include_directories(inc)
file(GLOB SOURCES
        "src/*.c"
        "inc/*.h")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(EXECUTABLE_OUTPUT_PATH "bin")

if (UNIX)
    set (CMAKE_CXX_FLAGS "-g3 -Wall -O0")
endif ()

add_library(PCA9685_Lib src/pca9685.c)
add_executable(PCA9685_Test ${SOURCES})