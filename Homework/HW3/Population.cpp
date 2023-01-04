//
// Created by alon on 20/12/2022.
//

#include "Population.h"
#include <iostream>

//main constructor
Population::Population(int populationSize, int virusVectorSize, int pm,int* ptr) {
    this->virusVectorSize = virusVectorSize;
    this->populationSize = populationSize;
    this->greatestVirusOfAllTimes = nullptr;
    this->pm = pm;
    this->viruses = new Virus *[populationSize];
    this->ptrs = ptr;
}

//destructor
Population::~Population() {
    for (int i = 0; i < populationSize; i++) {
        delete viruses[i];
    }
    delete[] viruses;
    delete[] ptrs;
}

//copy constructor
Population::Population(const Population &other) {
    this->viruses = new Virus *[other.populationSize];
    this->greatestVirusOfAllTimes = nullptr;
    this->populationSize = other.populationSize;
    this->virusVectorSize = other.virusVectorSize;
    this->pm = other.pm;
    this->ptrs = other.ptrs;
    this->greatestVirusOfAllTimes = other.greatestVirusOfAllTimes;
    for (int i = 0; i < populationSize; i++) {
        *(this->viruses)[i] = *(other.viruses)[i];
    }
}

//assignment operator
Population &Population::operator=(const Population &other) {
    if (this == &other) return *this;
    this->viruses = new Virus *[other.populationSize];
    this->greatestVirusOfAllTimes = nullptr;
    this->populationSize = other.populationSize;
    this->virusVectorSize = other.virusVectorSize;
    this->pm = other.pm;
    this->greatestVirusOfAllTimes = other.greatestVirusOfAllTimes;
    for (int i = 0; i < populationSize; i++) {
        *(this->viruses)[i] = *(other.viruses)[i];
    }
    return *this;
}

//adds a virus into population index
void Population::add(Virus *virus, int index) {
    if (index >= 0 && index < populationSize) {
        viruses[index] = virus;
    } else {
        std::cerr << "Invalid Population Virus Index";
    }
}

//setter for greatest virus of all time
void Population::setGOAT() {
    if(greatestVirusOfAllTimes == nullptr){
        greatestVirusOfAllTimes = viruses[0];
    }
    if(viruses[0]->getScore() < greatestVirusOfAllTimes->getScore()){
        greatestVirusOfAllTimes = viruses[0];
    }
}

//sorts the viruses array by it scores.
void Population::insertionSort() {
    int i, j;
    Virus *key;
    for (i = 1; i < populationSize; i++) {
        j = i - 1;
        while (j >= 0 && viruses[j]->getScore() >viruses[j+1]->getScore()) {
            key = viruses[j+1];
            viruses[j + 1] = viruses[j];
            viruses[j] = key;
            j = j - 1;
        }
    }
}

//group update - copy the best virus for the worst one.
void Population::operator++() {
    Virus *fittest;
    fittest = new Virus(*(viruses[0]));
    add(fittest,populationSize-1);
}

//self update - switches the values in different indexes to get a better virus.
void Population::operator*() {
    for(int i = 0; i < populationSize; i++ ) {
        for (int j = 0; j < pm; ++j) {
            int index1 =  rand() % (virusVectorSize);
            int index2 =  rand() % (virusVectorSize);
            int a = viruses[i]->getValue(index1);
            int b = viruses[i]->getValue(index2);
            viruses[i]->setValue(b, index1);
            viruses[i]->setValue(a, index2);
        }
    }
    insertionSort();

}

//output stream method
std::ostream &operator<<(ostream &stream, Population &population) {
    for (int i = 0; i < population.populationSize; i++) {
        stream << *population.viruses[i];
    }
    stream << "\n";
    stream << *population.greatestVirusOfAllTimes;
    return stream;

}
















