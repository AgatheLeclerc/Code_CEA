# Minimum CMake version
cmake_minimum_required(VERSION 3.10)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Project name
project(AgatheAnalysis)

# Find ROOT
find_package(ROOT REQUIRED COMPONENTS RIO Tree)

# Include ROOT directories
include(${ROOT_USE_FILE})

# Add source files
file(GLOB SOURCES "src/*.cxx")

# Add a library target
add_library(AgatheLib ${SOURCES})

# Include directories
target_include_directories(AgatheLib PUBLIC inc)

# Add executable target
add_executable(Analysis Analysis.cxx)

# Link library to executable
target_link_libraries(Analysis AgatheLib ${ROOT_LIBRARIES})

# Add more debug information, including line number in case of segfault
set(CMAKE_BUILD_TYPE "Debug")
target_compile_options(Analysis PRIVATE -fno-omit-frame-pointer)
target_link_options(Analysis PRIVATE -fno-omit-frame-pointer)