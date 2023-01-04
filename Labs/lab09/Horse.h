//
// Created by baloo on 02/01/2023.
//

#ifndef LAB09_HORSE_H
#define LAB09_HORSE_H

#include "Animal.h"

class Horse : virtual public Animal {
public:
    Horse(const string &name, bool male);

    void speak() const override;

    virtual Animal *reproduce(Animal &animal) override;

    virtual Animal *reproduce2(Animal &animal) override;

};


#endif //LAB09_HORSE_H
