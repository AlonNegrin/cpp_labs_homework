cmake_minimum_required(VERSION 3.21)
project(lab08)

set(CMAKE_CXX_STANDARD 11)

add_executable(lab08 main.cpp Shape.cpp Shape.h Rectangle.cpp Rectangle.h Triangle.cpp Triangle.h RightTriangle.cpp RightTriangle.h Square.cpp Square.h)
