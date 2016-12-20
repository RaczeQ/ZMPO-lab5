cmake_minimum_required(VERSION 3.6)
project(zad5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp set.cpp set.h any_type.cpp any_type.h concrete_type.cpp concrete_type.h set2.cpp set2.h MyType.cpp MyType.h Inverted_Integer.cpp Inverted_Integer.h)
add_executable(zad5 ${SOURCE_FILES})