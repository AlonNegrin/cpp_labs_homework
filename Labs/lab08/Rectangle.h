//
// Created by baloo on 26/12/2022.
//

#ifndef LAB08_RECTANGLE_H
#define LAB08_RECTANGLE_H
#include "Shape.h"
#include "Square.h"

class Rectangle : public Shape{
private:
    int width;
    int height;
public:
    Rectangle(int x, int y, int width, int height);

    int getWidth() const;

    void setWidth(int width);

    int getHeight() const;

    void setHeight(int height);

    void draw(char symbol) override;

    Rectangle& operator=(Square &square);

};


#endif //LAB08_RECTANGLE_H
