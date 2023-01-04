//
// Created by baloo on 12/12/2022.
//

#ifndef LAB07_WALLE_H
#define LAB07_WALLE_H
#include "Robot.h"


class WallE : public Robot{
public:
    WallE();

    void move(string track) override;
};


#endif //LAB07_WALLE_H
