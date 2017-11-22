cmake_minimum_required(VERSION 3.8)
project(lista_array)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c lista-array.h lista-array.c)
add_executable(lista_array ${SOURCE_FILES})