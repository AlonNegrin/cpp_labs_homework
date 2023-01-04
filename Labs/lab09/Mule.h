//
// Created by baloo on 02/01/2023.
//

#ifndef LAB09_MULE_H
#define LAB09_MULE_H
#include "Donkey.h"
#include "Horse.h"

class Mule :virtual public Donkey, virtual public Horse{
public:
    Mule(const string &name, bool male);

    Animal* reproduce(Animal& animal) override;

    Animal* reproduce2(Animal& animal) override;

    void speak() const override;
};


#endif //LAB09_MULE_H
