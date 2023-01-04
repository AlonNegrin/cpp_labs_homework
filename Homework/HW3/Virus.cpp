//
// Created by alon on 20/12/2022.
//

#include <iostream>
#include "Virus.h"

using namespace std;

//main constructor
Virus::Virus(string name, int size, const int *target, int *ptr) {
    this->name = name;
    this->size = size;
    this->values = new int[size];
    this->target = new int[size];
    for (int i = 0; i < size; i++) {
        this->target[i] = target[i];
    }
    overallVariants = ptr;
    variant = 0;

}

//destructor
Virus::~Virus() {
    delete[] values;
    delete[] target;
    //TODO
//    if(overallVariants != nullptr) {
//        delete overallVariants;
//        overallVariants = nullptr;
//    }
}

//copy constructor
Virus::Virus(Virus &other) {
    this->size = other.size;
    this->name = other.name;
    this->values = new int[size];
    this->target = new int[size];
    this->overallVariants = other.overallVariants;
    (*overallVariants)++;
    this->variant = *overallVariants;
    for (int i = 0; i < size; i++) {
        this->values[i] = other.values[i];
        this->target[i] = other.target[i];

    }
}

//move constructor
Virus::Virus(Virus &&other) noexcept {
    this->values = new int[size];
    this->target = new int[size];
    this->size = other.size;
    this->name = other.name;
    this->overallVariants = other.overallVariants;
    (*overallVariants)++;
    this->variant = *overallVariants;
    for (int i = 0; i < size; i++) {
        this->values[i] = other.values[i];
        this->target[i] = other.target[i];

    }
}

//assignment operator
Virus &Virus::operator=(const Virus &other) {
    if (this == &other) return *this;
    this->target = new int[size];
    this->variant = other.variant;
    this->size = other.size;
    this->name = other.name;
    this->overallVariants = other.overallVariants;
    for (int i = 0; i < size; i++) {
        this->values[i] = other.values[i];
        this->target[i] = other.target[i];

    }
    return *this;
}

//move assignment operator
Virus &Virus::operator=(Virus &&other) noexcept {
    if (this == &other) return *this;
    this->size = other.size;
    this->name = other.name;
    this->variant = other.variant;
    this->overallVariants = other.overallVariants;
    for (int i = 0; i < size; i++) {
        this->values[i] = other.values[i];
        this->target[i] = other.target[i];

    }
    return *this;
}

//set value for index.
bool Virus::setValue(int value, int index) {
    if (value > size || index < 0 || index > size) {
        cerr << "invalid index/value for setValue";
        return false;
    }
    this->values[index] = value;
    return true;
}

//get value for index.
int Virus::getValue(int index) {
    if (index < 0 || index > size) {
        cerr << "invalid index for getValue";
        return -1;
    }
    return values[index];
}

//get the score of the virus against target virus.
double Virus::getScore() const {
    double result = 0.0;
    for (int i = 0; i < size; i++) {
        if (values[i] == target[i]) result += 1.0;
    }
    return double(1 - (double) (result / size));
}

//output method stream.
std::ostream &operator<<(ostream &stream, Virus &virus) {
    stream << virus.name;
    if (virus.variant != 0) {
        stream << "_" << virus.variant;
    }
    stream << "\t";
    for (int i = 0; i < virus.size; i++) {
        stream << virus.values[i] << " ";
    }
    stream << "\n";
    return stream;

}















