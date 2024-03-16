cmake_minimum_required(VERSION 3.28)
project(ConcurrentMergeSort VERSION 1.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories for header files
include_directories(include)

# Recursively find all .cpp files in the src directory
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Specify the executable
add_executable(${PROJECT_NAME} ${SOURCES})
