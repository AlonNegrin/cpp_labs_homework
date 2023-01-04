//
// Created by baloo on 02/01/2023.
//

#ifndef LAB09_DONKEY_H
#define LAB09_DONKEY_H

#include "Animal.h"


class Donkey : virtual public Animal {
public:
    Donkey(const string &name, bool male);

    void speak() const override;

    virtual Animal *reproduce(Animal &animal) override;

    virtual Animal *reproduce2(Animal &animal) override;

};


#endif //LAB09_DONKEY_H
