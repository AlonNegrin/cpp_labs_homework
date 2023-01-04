//
// Created by baloo on 02/01/2023.
//

#include <iostream>
#include "Donkey.h"
#include "Mule.h"


Donkey::Donkey(const string &name, bool male) : Animal(name, male) {}

Animal *Donkey::reproduce(Animal &animal) {
    if (this->isMale() == animal.isMale()) return nullptr;
    if (typeid(animal) == typeid(Mule)) return nullptr;
    if (typeid(animal) == typeid(Donkey)) {
        string name = this->getName() + animal.getName();
        int i = rand() % 2;
        return new Donkey(name, i);
    }
    if (typeid(animal) == typeid(Horse)) {
        string name = this->getName() + animal.getName();
        int i = rand() % 2;
        return new Mule(name, i);
    }
}


Animal *Donkey::reproduce2(Animal &animal) {
    if (this->isMale() == animal.isMale()) return nullptr;
    if (dynamic_cast<Mule *>(&animal) != nullptr) return nullptr;
    if (dynamic_cast<Donkey *>(&animal) != nullptr) {
        string name = this->getName() + animal.getName();
        int i = rand() % 2;
        return new Donkey(name, i);
    }
    if (dynamic_cast<Horse *>(&animal) != nullptr) {
        string name = this->getName() + animal.getName();
        int i = rand() % 2;
        return new Mule(name, i);
    }
}

void Donkey::speak() const {
    std::cout << getName() << " Donkey" << std::endl;
}



