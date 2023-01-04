//
// Created by baloo on 02/01/2023.
//

#include <iostream>
#include "Horse.h"
#include "Mule.h"


Horse::Horse(const string &name, bool male) : Animal(name, male) {}

Animal *Horse::reproduce(Animal &animal) {
    if (this->isMale() == animal.isMale()) return nullptr;
    if (typeid(animal) == typeid(Mule)) return nullptr;
    if (typeid(animal) == typeid(Horse)) {
        string name = this->getName() + animal.getName();
        int i = rand() % 2;
        return new Horse(name, i);
    }
    if (typeid(animal) == typeid(Donkey)) {
        string name = this->getName() + animal.getName();
        int i = rand() % 2;
        return new Mule(name, i);
    }
}

Animal *Horse::reproduce2(Animal &animal) {
    if (this->isMale() == animal.isMale()) return nullptr;
    if (dynamic_cast<Mule *>(&animal) != nullptr) return nullptr;
    if (dynamic_cast<Horse *>(&animal) != nullptr) {
        string name = this->getName() + animal.getName();
        int i = rand() % 2;
        return new Horse(name, i);
    }
    if (dynamic_cast<Donkey *>(&animal) != nullptr) {
        string name = this->getName() + animal.getName();
        int i = rand() % 2;
        return new Mule(name, i);
    }
}

void Horse::speak() const {
    std::cout << getName() << " Horse" << std::endl;
}


