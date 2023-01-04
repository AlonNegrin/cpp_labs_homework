//
// Created by baloo on 28/11/2022.
//

#include "Stack.h"

const int MAX_SIZE = 100;

Stack::Stack() : size(0), top_element(0) {
    this->arr = new int[MAX_SIZE];
    this->capacity = MAX_SIZE;

}

Stack::Stack(int size) : size(0),top_element(0) {
    this->arr = new int[size];
    this->capacity = size;
}

//copy constructor
Stack::Stack(const Stack &src) {
    this->capacity = src.capacity;
    this->arr = new int[src.capacity];
    this->top_element = src.top_element;
    for(int i = 0; i < size; i++){
        this->arr[i] = src.arr[i];
    }
}

//move constructor
Stack::Stack(Stack &&other) {
    this->arr = other.arr;
    this->size = other.size;
    this->capacity = other.capacity;
    this->top_element = other.top_element;
    other.arr = nullptr;
}

//destructor
Stack::~Stack() {
    delete[] arr;
}

//assignment operator
Stack &Stack::operator=(const Stack &other) {
    if (this == &other) {
        return *this;
    }
    delete[] arr;
    this->capacity = other.capacity;
    this->arr = new int[other.capacity];
    this->top_element = other.top_element;
    for(int i = 0; i < size; i++){
        this->arr[i] = other.arr[i];
    }

    return *this;
}

//move assignment operator
Stack &Stack::operator=(Stack &&other) {
    this->arr = other.arr;
    this->size = other.size;
    this->capacity = other.capacity;
    this->top_element = other.top_element;
    other.arr = nullptr;

    return *this;
}

void Stack::push(int element) {
    if(size != capacity){
        arr[size] = element;
        top_element++;
    }
}

int Stack::pop() {
    return arr[top_element--];
}

int Stack::top() {
    return arr[top_element];
}

bool Stack::empty() {
    return size==0;
}

void Stack::transfer(Stack stack) {
    stack.size = this->size;
    stack.capacity = this->capacity;
    stack.top_element = size;
    int j = top_element;
    for(int i = 0;i < size || j >= 0; i ++){
        stack.arr[i] = this->arr[j];
        j--;
    }
}

int Stack::operator*() const{
    return this->arr[top_element];
}

void Stack::operator~(){
    top_element=0;
}

bool Stack::operator!() {
    return empty();
}

void Stack::operator<<(int element) {
    push(element);
}

void Stack::operator>>(int &element) {
    element = pop();
}

void Stack::operator<<(Stack s) {
    transfer(s);
}


















