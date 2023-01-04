//
// Created by baloo on 26/12/2022.
//
#include <iostream>
#include "RightTriangle.h"

RightTriangle::RightTriangle(int x, int y, double size) : Triangle(x, y, size) {}

void RightTriangle::draw(char symbol) {
    std::cout << "Right Triangle";
    }


