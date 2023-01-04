//
// Created by baloo on 05/12/2022.
//

#include "Stack.h"
#include "List.h"

Stack::Stack() {
    list = new List();
}

Stack::~Stack() {
    list->clear();
    delete list;
}

void Stack::push(int element) {
    list->insert(element);
}

int Stack::pop() {
    int top = (*list)[0];
    list->remove(top);
    return top;
}

int Stack::top() {
    return (*list)[0];
}

bool Stack::empty() {
    return list->size() == 0;
}

void Stack::transfer(Stack& other) {
    for(int i = 0;i < list->size();i++){
        other.push((*list)[i]);
        list->remove((*list)[i]);
    }
}

int Stack::operator*() {
    return top();
}

void Stack::operator~() {
    list->clear();
}

bool Stack::operator!() {
    return empty();
}

void Stack::operator<<(int element) {
    push(element);
}

void Stack::operator>>(int &variable) {
    variable = pop();
}

void Stack::operator<<(Stack &other) {
    other.transfer(*this);
}

void Stack::operator>>(Stack &other) {
    transfer(other);
}

ostream &Stack::operator<<(ostream &out) {
    out << list;
    return out;
}












