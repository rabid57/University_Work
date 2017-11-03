cmake_minimum_required(VERSION 3.7)
project(W2)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c inchConverter.h)
add_executable(W2 ${SOURCE_FILES})