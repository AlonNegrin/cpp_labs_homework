//
// Created by baloo on 12/12/2022.
//

#ifndef LAB07_ROBOT_H
#define LAB07_ROBOT_H
#include <string>
#include <cstdlib>
using namespace std;

class Robot {
protected:
    int speed;
    int stepsTaken;
    int chance;

public:
    Robot();

    virtual void move(string track);

    bool avoidObstecale() const;

    virtual int getSpeed() const;

    void setSpeed(int speed);

    int getChance() const;

    void setChance(int chance);

};


#endif //LAB07_ROBOT_H
