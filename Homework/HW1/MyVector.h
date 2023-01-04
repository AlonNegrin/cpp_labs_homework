//
// Created by baloo on 16/11/2022.
//

#ifndef HW_2_MYVECTOR_H
#define HW_2_MYVECTOR_H

#include "Observation.h"

class MyVector {
public:

    MyVector(int size, int maxCapacity);

    ~MyVector();

    int getActualSize() const;

    Observation getObservation(const std::string &name);

    Observation getObservation(int index);

    void add(Observation &obs);

    void remove(int i);

    bool isEmpty() const { return actual_size == 0; }


private:
    int size;
    int actual_size;
    Observation *observations;
    int max_capacity;
};


#endif //HW_2_MYVECTOR_H
