//
// Created by baloo on 12/12/2022.
//

#include "Robot.h"

Robot::Robot() : speed(1), chance(30), stepsTaken(0) {}

void Robot::move(string track) {
    if (track[stepsTaken] == '_') {
        stepsTaken++;
    } else {
        if (avoidObstecale())
            stepsTaken++;
    }
}


int Robot::getSpeed() const {
    return speed;
}

void Robot::setSpeed(int speed) {
    Robot::speed = speed;
}

int Robot::getChance() const {
    return chance;
}

void Robot::setChance(int chance) {
    Robot::chance = chance;
}

bool Robot::avoidObstecale() const {
    int n = rand() % 100 + 1;
    if (n <= getChance()) return true;
    return false;
}



