//
// Created by baloo on 26/12/2022.
//

#include "Shape.h"

Shape::Shape(int x, int y) : x(x), y(y) {}

int Shape::getX() const {
    return x;
}

void Shape::setX(int x) {
    Shape::x = x;
}

int Shape::getY() const {
    return y;
}

void Shape::setY(int y) {
    Shape::y = y;
}
