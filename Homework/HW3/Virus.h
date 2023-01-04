//
// Created by alon on 20/12/2022.
//

#ifndef HW3_VIRUS_H
#define HW3_VIRUS_H
#include <string>
using namespace std;

class Virus {
private:
    int *values;                //our value vector
    int *target;                //our target virus
    int *overallVariants;       //the amount of overall variants that created.
    int variant;                //this current variant number
    int size;                   //the size of the value vector
    string name;                //virus name


//I have used the rule of five here because I need to use the copy move assignment to update the best virus of each gen.
public:
    Virus(string name,int size,const int *target,int* ptr);     //main constructor

    virtual ~Virus();                           //destructor

    Virus(Virus &other);                        //copy constructor

    Virus(Virus &&other) noexcept ;             //move constructor

    Virus& operator=(const Virus &other);       //assignment operator

    Virus& operator=(Virus &&other) noexcept ;  //move assignment operator

    bool setValue(int value,int index);         //set value for index

    int getValue(int index);                    //get value for index

    double getScore() const;                    //get score e

    friend std::ostream &operator<<(std::ostream &stream, Virus &virus); //output method

};


#endif //HW3_VIRUS_H
