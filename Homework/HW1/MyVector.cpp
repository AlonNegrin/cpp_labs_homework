//
// Created by alon on 16/11/2022.
//

#include <iostream>
#include "MyVector.h"
#include "Observation.h"


MyVector::MyVector(int size, int maxCapacity) : size(size), max_capacity(maxCapacity) {
    observations = new Observation[size + 1];
    actual_size = 0;
}


MyVector::~MyVector() {
    if (actual_size != 0) { delete[] observations; }
}


Observation MyVector::getObservation(const std::string &name) {
    for (int i = 0; i < actual_size; i++) {
        if (observations[i].getName() == name)
            return observations[i];
    }
    return {};

}

Observation MyVector::getObservation(int index) {
    return observations[index];
}

void MyVector::add(Observation &obs) {
    if (actual_size == max_capacity) {
        std::cerr << "vector is full" << std::endl;
        return;
    }
    if (actual_size == size) {
        auto *resized = new Observation[size + 10];
        for (int i = 0; i < actual_size; i++) {
            resized[i] = observations[i];
        }
        delete[] observations;
        observations = resized;
        size += 10;

    }
    observations[actual_size] = obs;
    actual_size++;
}


void MyVector::remove(int i) {
    for (int j = i; j < actual_size - 1; j++) {
        observations[j] = observations[j + 1];
    }
    actual_size--;
}

int MyVector::getActualSize() const {
    return actual_size;
}









