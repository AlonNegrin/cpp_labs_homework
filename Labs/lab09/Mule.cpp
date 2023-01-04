//
// Created by baloo on 02/01/2023.
//

#include <iostream>
#include "Mule.h"

Mule::Mule(const string &name, bool male) : Animal(name,male), Donkey(name, male), Horse(name, male) {}

void Mule::speak() const {
    std::cout << getName() << " Mule" << std::endl;
}

Animal *Mule::reproduce(Animal &animal) {
    return nullptr;
}

Animal *Mule::reproduce2(Animal &animal) {
    return nullptr;
}
