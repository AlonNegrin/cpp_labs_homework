//
// Created by baloo on 26/12/2022.
//

#ifndef LAB08_TRIANGLE_H
#define LAB08_TRIANGLE_H
#include "Shape.h"

class Triangle: public Shape{
private:
    int size;
public:
    Triangle(int x, int y, int size);

    double getSize() const;

    void setSize(int size);

    virtual void draw(char symbol) = 0;
};


#endif //LAB08_TRIANGLE_H
