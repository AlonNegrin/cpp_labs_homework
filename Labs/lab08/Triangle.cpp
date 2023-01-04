//
// Created by baloo on 26/12/2022.
//

#include "Triangle.h"

Triangle::Triangle(int x, int y, int size) : Shape(x, y), size(size) {}

double Triangle::getSize() const {
    return size;
}

void Triangle::setSize(int size) {
    Triangle::size = size;
}
