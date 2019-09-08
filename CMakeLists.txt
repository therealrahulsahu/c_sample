cmake_minimum_required(VERSION 3.14)
project(c_sample)

set(CMAKE_CXX_STANDARD 14)

add_executable(c_sample special/doc_struct.c)
#add_executable(c_sample main.c)
#add_executable(c_sample main.cpp)