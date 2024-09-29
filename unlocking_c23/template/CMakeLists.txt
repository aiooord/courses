# Specify the minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Set the C standard to C23
set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED True)

# Set the project name and specify that it's written in C
project(Overview VERSION 1.0.0 LANGUAGES C)

# Specify the directories containing header and source files
include_directories(${PROJECT_SOURCE}/headers)
file(GLOB SOURCES_FILES ${PROJECT_SOURCE_DIR}/sources/*.c)

# Set the compiler flags for debugging
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")

# Add an executable to be built from the source files
add_executable(Overview main.c ${SOURCES_FILES})
