//
// Created by baloo on 04/12/2022.
//

#ifndef HW2_GAME_H
#define HW2_GAME_H

#include "Cell.h"

// DISCLAIMER : i used the rule of 3 in this class because it had a dynamicly allocated memory class members so
//              i had to create a custom destructor. so i made a copy constructor and an assignment operator aswell.
class Game {
private:
    int size;
    Cell ***board;
    int redPlayerScore;
    int bluePlayScore;
    int emptyCellsLeft;
    bool redTurn;

    void printScore() const;

public:
    Game(int size);

    Game(const Game &other);

    Game& operator=(const Game &game);

    virtual ~Game();

    bool isRedTurn() const;

    void printBoard();

    void play();

    bool getUserInput(int &row, int &col);

    bool setPotion(int row,int col);

    bool cellIsValid(int row,int col);

    void changeTurn();

    void printResult() const;

    void updateAdjacentCells(int row,int col);

};


#endif //HW2_GAME_H
