//
// Created by baloo on 12/12/2022.
//

#ifndef LAB07_TRANSFORMER_H
#define LAB07_TRANSFORMER_H

#include "Robot.h"

class Transformer : public Robot {
private:
    bool onGround;

public:
    Transformer();

    void move(string step) override;

    bool fly();

    int getSpeed() const override;
};


#endif //LAB07_TRANSFORMER_H
