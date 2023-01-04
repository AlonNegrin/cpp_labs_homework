//
// Created by baloo on 02/01/2023.
//

#ifndef LAB09_ANIMAL_H
#define LAB09_ANIMAL_H
#include <string>
using namespace std;

class Animal {
private:
    string name;
    bool male;
public:
    Animal(const string &name, bool male);

    const string &getName() const;

    bool isMale() const;

    virtual void speak() const = 0;

    virtual Animal* reproduce(Animal& animal) = 0;

    virtual Animal* reproduce2(Animal& animal) = 0;

};


#endif //LAB09_ANIMAL_H
