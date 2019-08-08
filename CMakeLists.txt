cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)
project(CMAKE_TEST)

# Enable warnings
add_compile_options(-Wall -Wextra -Wpedantic)

set(CMAKE_TEST_EXE "hellout.x")

add_executable(${CMAKE_TEST_EXE} src/hello.cpp)

target_compile_features(${CMAKE_TEST_EXE} PRIVATE cxx_lambda_init_captures)