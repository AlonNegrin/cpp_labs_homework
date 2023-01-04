//
// Created by baloo on 16/11/2022.
//

#ifndef HW_2_OBSERVATION_H
#define HW_2_OBSERVATION_H


#include <string>

class Observation {
public:

    Observation();

    explicit Observation(int size);


    double getValue(int index) const;

    void setValue(int index, double value);

    void setName(const std::string &name);

    const std::string &getName() const;

    void print() const;


private:
    int size;
    double *arr;
    std::string name;
};


#endif //HW_2_OBSERVATION_H
