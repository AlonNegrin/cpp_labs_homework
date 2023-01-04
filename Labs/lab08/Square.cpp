//
// Created by baloo on 26/12/2022.
//

#include "Square.h"

Square::Square(int x, int y, int size) : Rectangle(x, y, size, size), size(size) {
}

int Square::getSize() const {
    return size;
}

void Square::setSize(int size) {
    Square::size = size;
    setHeight(size);
    setWidth(size);
}

void Square::draw(char symbol) {
    Rectangle::draw(symbol);
}
