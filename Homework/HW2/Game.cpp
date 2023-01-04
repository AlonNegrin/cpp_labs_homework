//
// Created by baloo on 04/12/2022.
//

#include "Game.h"
#include "Cell.h"
#include <iostream>
#include <sstream>

using namespace std;

Game::Game(int size) : size(size), emptyCellsLeft(size * size), redTurn(true) {
    this->board = new Cell **[size];
    for (int i = 0; i < size; i++) {
        this->board[i] = new Cell *[size];
        for (int j = 0; j < size; j++) {
            board[i][j] = new Cell();
        }
    }
    this->bluePlayScore = 0;
    this->redPlayerScore = 0;
}

// copy constructor
Game::Game(const Game &other) {
    this->size = other.size;
    this->board = new Cell **[size];
    for (int i = 0; i < size; i++) {
        this->board[i] = other.board[i];
        for (int j = 0; j < size; j++) {
            this->board[i][j] = other.board[i][j];
        }
    }
    this->bluePlayScore = other.bluePlayScore;
    this->redPlayerScore = other.redPlayerScore;
    this->redTurn = other.redTurn;
    this->emptyCellsLeft = other.emptyCellsLeft;
}

//assignment operator
Game &Game::operator=(const Game &game) {
    if (this == &game) {
        return *this;
    }
    size = game.size;
    redPlayerScore = game.redPlayerScore;
    bluePlayScore = game.bluePlayScore;
    redTurn = game.redTurn;
    emptyCellsLeft = game.emptyCellsLeft;
    for (int i = 0; i < size; i++) {
        this->board[i] = game.board[i];
        for (int j = 0; j < size; j++) {
            this->board[i][j] = game.board[i][j];
        }
    }
    return *this;
}

// destructor
Game::~Game() {
    for (int i = 0; i < size; i++) {
        delete[] board[i];
    }
    delete[] board;
}

//returns if its red's turn.
bool Game::isRedTurn() const {
    return redTurn;
}

//prints the gameboard.
void Game::printBoard() {
    printScore();
    for (int i = 0; i < size; i++) {
        cout << "\n";
        for (int j = 0; j < size; j++) {
            cout << board[i][j]->getSymbol() << "\t";
        }
    }
    cout << "\n";
}

//prints the scoreboard.
void Game::printScore() const {
    cout << "Red count: " << redPlayerScore << "\t";
    cout << "Blue count: " << bluePlayScore;
}

//calls all the methods for the game
void Game::play() {
    int row, col;
    printBoard();
    while (emptyCellsLeft != 0) {
        getUserInput(row, col);
        row--;
        col--;
        if (cellIsValid(row, col)) {
            setPotion(row, col);
            updateAdjacentCells(row, col);
            changeTurn();
            printBoard();
        }
    }
    printResult();
    exit(0);
}

//get 2 numbers from user into row and col variables.
bool Game::getUserInput(int &row, int &col) {
    string input;

    isRedTurn() ? cout << "R:\n" : cout << "B:\n";
    getline(cin, input);
    stringstream s(input);
    if (!(s >> input)) return false;
    row = stoi(input);
    if (!(s >> input)) return false;
    col = stoi(input);
    if (!(s >> input)) return true;
    return false;
}

//sets a cell[row][col] to a potion of the player color.
bool Game::setPotion(int row, int col) {
    isRedTurn() ? board[row][col]->setRedPotion() : board[row][col]->setBluePotion();
    emptyCellsLeft--;
    return true;
}

//gets a row & col ints and returns if the index is valid.
bool Game::cellIsValid(int row, int col) {
    if (row >= size || col >= size || row < 0 || col < 0) {
        cerr << "Invalid row/col index or non free cell\n";
        return false;
    }
    if (board[row][col]->getSymbol() != 'O') {
        cerr << "Invalid row/col index or non free cell\n";
        return false;
    }
    return true;

}

//passes the turn to the other player.
void Game::changeTurn() {
    redTurn = !redTurn;
}

//print the result when the game is finished.
void Game::printResult() const {
    if (redPlayerScore > bluePlayScore) cout << "Red won\n";
    if (bluePlayScore > redPlayerScore) cout << "Blue won\n";
    if (redPlayerScore == bluePlayScore) cout << "The game ended with a tie\n";
}

//update the cells neighbouring cell[row][col].
void Game::updateAdjacentCells(int row, int col) {
    const int x[] = {-1, 1, -1, 0, 1, -1, 0, 1};
    const int y[] = {0, 0, -1, -1, -1, 1, 1, 1};
    int neighbourX, neighbourY;
    for (int i = 0; i < 8; i++) {
        neighbourX = row + x[i];
        neighbourY = col + y[i];
        if (neighbourY >= size || neighbourY < 0 || neighbourX >= size || neighbourX < 0)
            continue;

        isRedTurn() ? board[neighbourX][neighbourY]->setRedFlag() : board[neighbourX][neighbourY]->setBlueFlag();
        board[neighbourX][neighbourY]->updateCell(redPlayerScore, bluePlayScore, redTurn, emptyCellsLeft);
    }
}














