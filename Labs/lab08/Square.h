//
// Created by baloo on 26/12/2022.
//

#ifndef LAB08_SQUARE_H
#define LAB08_SQUARE_H
#include "Rectangle.h"

class Square: public Rectangle{
private:
    int size;
public:
    Square(int x, int y, int size);

    int getSize() const;

    void setSize(int size);

    void draw(char symbol) override;
};


#endif //LAB08_SQUARE_H
