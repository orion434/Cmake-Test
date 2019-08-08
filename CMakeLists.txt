cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

add_executable(intro src/hello.cpp)

target_compile_features(intro PRIVATE cxx_lambda_init_captures)