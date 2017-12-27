set(CMAKE_LEGACY_CYGWIN_WIN32 0) # Remove when CMake >= 2.8.4 is required
cmake_minimum_required (VERSION 2.6)

project (PCA9685_Test C)

file(GLOB SOURCES
        "src/*.c"
        "inc/*.h")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH "bin")

if (UNIX)
    set (CMAKE_CXX_FLAGS "-g3 -Wall -O0")
endif ()

# Locate libraries and headers
find_package(WiringPi REQUIRED)
find_package(Threads REQUIRED)

# Include headers
include_directories(${WIRINGPI_INCLUDE_DIRS})
include_directories(inc)


add_executable(PCA9685_Test ${SOURCES})

# Link against libraries (MUST BE AFTER add_executable)
target_link_libraries(PCA9685_Test ${WIRINGPI_LIBRARIES})
target_link_libraries(PCA9685_Test ${CMAKE_THREAD_LIBS_INIT})