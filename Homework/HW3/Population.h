//
// Created by alon on 20/12/2022.
//

#ifndef HW3_POPULATION_H
#define HW3_POPULATION_H

#include "Virus.h"


class Population {
private:
    int pm;                             //number of switches per update
    int virusVectorSize;                //size of value array of every virus
    int populationSize;                 //size of population
    Virus **viruses;                    //array of viruses.
    Virus *greatestVirusOfAllTimes;     //the greatest virus of all time.
    int* ptrs;                          //array of pointers to check variants

public:
    //main constructor
    Population(int populationSize, int virusVectorSize, int pm,int* ptr);

    //destructor
    ~Population();

    //copy constructor
    Population(const Population &other);

    //assignment operator.
    Population &operator=(const Population &other);

    //add virus to index.
    void add(Virus *virus, int index);

    //setter for the greatest virus of all time.
    void setGOAT();

    //sorts the array of viruses by their score.
    void insertionSort();

    //group update - copy the best virus for the worst one.
    void operator++();

    //self update - switches the values in different indexes to get a better virus.
    void operator*();

    //output stream method.
    friend std::ostream &operator<<(std::ostream &stream, Population &viruses);

    //returns true of virus hit the target virus, false otherwise.
    bool metTarget() {
        return viruses[0]->getScore() == 0.0;
    }
};


#endif //HW3_POPULATION_H
