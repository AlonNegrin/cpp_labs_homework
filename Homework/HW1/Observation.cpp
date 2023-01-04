//
// Created by baloo on 16/11/2022.
//
#include <iostream>
#include "Observation.h"


Observation::Observation() = default;

Observation::Observation(const int size) : size(size) {
    this->arr = new double[size];
    this->name = "";
}


double Observation::getValue(int index) const {
    return arr[index];
}

void Observation::setName(const std::string &string) {
    this->name = string;
}

const std::string &Observation::getName() const {
    return name;
}


void Observation::setValue(int index, double value) {
    this->arr[index] = value;
}

void Observation::print() const {
    std::string num;
    std::cout << getName();
    std::cout << " = [ ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i];
        if (i != size - 1)
            std::cout << " ";
    }
    std::cout << "]" << std::endl;
}
















