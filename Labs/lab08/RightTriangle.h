//
// Created by baloo on 26/12/2022.
//

#ifndef LAB08_RIGHTTRIANGLE_H
#define LAB08_RIGHTTRIANGLE_H
#include "Triangle.h"

class RightTriangle: public Triangle{
public:
    RightTriangle(int x, int y, double size);

    void draw(char symbol) override;



};


#endif //LAB08_RIGHTTRIANGLE_H
