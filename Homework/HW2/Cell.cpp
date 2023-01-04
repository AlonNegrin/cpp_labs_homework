//
// Created by baloo on 04/12/2022.
//

#include "Cell.h"

Cell::Cell() : symbol('O') {}

char Cell::getSymbol() {
    return symbol;
}

bool Cell::isEmpty() {
    return symbol == 'O';
}

void Cell::setBlack() {
    this->symbol = 'X';
}

void Cell::setRedPotion() {
    this->symbol = 'R';
}

void Cell::setBluePotion() {
    this->symbol = 'B';
}

void Cell::setRedCrystal() {
    this->symbol = 'r';
}

void Cell::setBlueCrystal() {
    this->symbol = 'b';
}

bool Cell::isBlueCrystal() {
    return symbol == 'b';
}

bool Cell::isRedCrystal() {
    return symbol == 'r';
}

void Cell::setRedFlag() {
    redFlag++;
}

void Cell::setBlueFlag() {
    blueFlag++;
}

void Cell::updateCell(int &redPlayerScore, int &bluePlayerScore, bool redTurn, int &emptyCellsLeft) {
    if (redTurn) {
        if (isRedCrystal()) setBlack(), redPlayerScore--;
        if (redFlag == 2 && isEmpty()) setBlack(), emptyCellsLeft--;
        if (redFlag == 2 && isBlueCrystal()) setBlack(), bluePlayerScore--;
        if (blueFlag == 1 && isEmpty()) setRedCrystal(), redPlayerScore++, emptyCellsLeft--;
    } else {
        if (isBlueCrystal()) setBlack(), bluePlayerScore--;
        if (blueFlag == 2 && isEmpty()) setBlack(), emptyCellsLeft--;
        if (blueFlag == 2 && isRedCrystal()) setBlack(), redPlayerScore--;
        if (redFlag == 1 && isEmpty()) setBlueCrystal(), bluePlayerScore++, emptyCellsLeft--;
    }
}










