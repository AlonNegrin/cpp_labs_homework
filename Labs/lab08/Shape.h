//
// Created by baloo on 26/12/2022.
//

#ifndef LAB08_SHAPE_H
#define LAB08_SHAPE_H


class Shape {
private:
    int x,y;
public:
    Shape(int x, int y);

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    virtual void draw(char symbol) = 0;
};


#endif //LAB08_SHAPE_H
