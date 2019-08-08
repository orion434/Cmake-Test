cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)
project(CMAKE_TEST)

# Example taken from this video: https://www.youtube.com/watch?v=HPMvU64RUTY

# Enable warnings
if (MSVC) # if Microsoft Visual Studio
	add_compile_options(/W4)
else()    # Linux/Shell
	add_compile_options(-Wall -Wextra -Wpedantic)
endif()

set(CMAKE_TEST_EXE "hellout.x")

add_executable(${CMAKE_TEST_EXE} src/hello.cpp)

# Complete list available at https://cmake.org/cmake/help/latest/prop_gbl/CMAKE_CXX_KNOWN_FEATURES.html
target_compile_features(${CMAKE_TEST_EXE} PRIVATE cxx_lambda_init_captures)

# https://cmake.org/cmake/help/latest/manual/cmake-compile-features.7.html
# Or set property for the CXX_STANDARD
# set_property(TARGET foo PROPERTY CXX_STANDARD 11)
