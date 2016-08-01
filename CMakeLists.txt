cmake_minimum_required(VERSION 3.5)
project(A_Heap_of_students)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp date.h date.cpp address.h address.cpp student.h student.cpp)
add_executable(A_Heap_of_students ${SOURCE_FILES})