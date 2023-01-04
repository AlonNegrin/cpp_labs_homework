//
// Created by baloo on 12/12/2022.
//

#include "Terminator.h"

Terminator::Terminator() {
    setSpeed(2);
    setChance(10);
}

void Terminator::move(string track) {
    if (shoot()) {
        for (int i = stepsTaken; i < stepsTaken + 10 || i == 39; i++) {
            if (track[i] == '#') {
                track[i] = '_';
                break;
            }
        }
        for (int i = 0; i < getSpeed(); i++) {
            if (track[i] == '_')
                stepsTaken++;
        }
    }
}

bool Terminator::shoot() {
    int n = rand() % 100 + 1;
    if (n <= getChance()) return true;
    return false;
}


