//
// Created by baloo on 12/12/2022.
//

#ifndef LAB07_TERMINATOR_H
#define LAB07_TERMINATOR_H
#include "Robot.h"


class Terminator : public Robot {
public:
    Terminator();

    void move(string step) override;

    bool shoot();
};


#endif //LAB07_TERMINATOR_H
