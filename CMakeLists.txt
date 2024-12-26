cmake_minimum_required(VERSION 3.10)

project(NeuralNetworksCpp)

set(CMAKE_CXX_STANDARD 11)

# Add the executable
add_executable(MyExecutable src/main.cpp src/data/data.cpp)

# Include directories
include_directories(include)
