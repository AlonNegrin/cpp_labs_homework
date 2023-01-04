//
// Created by baloo on 26/12/2022.
//
#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(int x, int y, int width, int height) : Shape(x, y) {
    this->width = width;
    this->height = height;
}

void Rectangle::draw(char symbol) {
    for (int k = 0; k < getY(); k++) std::cout << "\n";
    for (int i = 0; i < height; i++) {
        for (int n = 0; n < getX(); n++) std::cout << " ";
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1)
                std::cout << symbol * width;
            else if (j == 0 || j == width - 1)
                std::cout << symbol;
            else
                std::cout << " ";
        }
        std::cout << "\n";
    }
}

int Rectangle::getWidth() const {
    return width;
}

void Rectangle::setWidth(int width) {
    Rectangle::width = width;
}

int Rectangle::getHeight() const {
    return height;
}

void Rectangle::setHeight(int height) {
    Rectangle::height = height;
}

Rectangle &Rectangle::operator=(Square &square) {
    setWidth(square.getSize());
    setHeight(square.getSize());
    return *this;
}


