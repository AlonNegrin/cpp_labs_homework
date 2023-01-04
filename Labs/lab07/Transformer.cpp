//
// Created by baloo on 12/12/2022.
//

#include "Transformer.h"

Transformer::Transformer() : onGround(true) {
    setChance(25);
}

void Transformer::move(string track) {
    onGround = fly();
    char step = track[stepsTaken];
    for(int i = 0; i < getSpeed();i++) {
        if (step == '_') {
            stepsTaken++;
        } else {
            if (!onGround)
                stepsTaken++;
        }
    }
}

int Transformer::getSpeed() const {
    return onGround ? speed : speed + 1;
}

bool Transformer::fly() {
    int n = rand() % 100 + 1;
    if (n <= getChance()) return true;
    return false;
}



