//
// Created by baloo on 05/12/2022.
//

#ifndef LAB06_STACK_H
#define LAB06_STACK_H

#include "List.h"

class Stack {
private:
    List *list;

public:
    Stack();

    virtual ~Stack();

    void push(int element);

    int pop();

    int top();

    bool empty();

    void transfer(Stack &other);

    int operator*();

    void operator~();

    bool operator!();

    void operator<<(int element);

    void operator>>(int &variable);

    void operator<<(Stack &other);

    void operator>>(Stack &other);

    ostream &operator<<(ostream &out);

};


#endif //LAB06_STACK_H
