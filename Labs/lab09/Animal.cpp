//
// Created by baloo on 02/01/2023.
//

#include "Animal.h"
Animal::Animal(const string &name, bool male) : name(name), male(male) {}

const string &Animal::getName() const {
    return name;
}

bool Animal::isMale() const {
    return male;
}


