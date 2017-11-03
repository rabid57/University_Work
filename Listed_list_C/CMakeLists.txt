cmake_minimum_required(VERSION 3.7)
project(W3)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c linked_lists.c linked_list.h)
add_executable(W3 ${SOURCE_FILES})