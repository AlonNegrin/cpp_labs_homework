cmake_minimum_required(VERSION 3.21)
project(lab09)

set(CMAKE_CXX_STANDARD 11)

add_executable(lab09 main.cpp Animal.cpp Animal.h Horse.cpp Horse.h Donkey.cpp Donkey.h Mule.cpp Mule.h)
