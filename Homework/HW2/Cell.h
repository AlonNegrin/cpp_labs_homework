//
// Created by baloo on 04/12/2022.
//

//DISCLAIMER: i used the rule of 0, because all my class members are of primitive type.

#ifndef HW2_CELL_H
#define HW2_CELL_H
#include <iostream>
using namespace std;

class Cell {
private:
    char symbol;
    int redFlag = 0;
    int blueFlag = 0;

public:
    Cell();

    char getSymbol();

    bool isEmpty();

    void setBlack();

    void setRedPotion();

    void setBluePotion();

    bool isRedCrystal();

    bool isBlueCrystal();

    void setRedCrystal();

    void setBlueCrystal();

    void setRedFlag();

    void setBlueFlag();

    void updateCell(int &redPlayerScore, int &bluePlayerScore, bool redTurn,int &emptyCellsLeft);


};


#endif //HW2_CELL_H
