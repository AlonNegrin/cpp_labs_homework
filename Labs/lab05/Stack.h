//
// Created by baloo on 28/11/2022.
//

#ifndef LAB05TEST_STACK_H
#define LAB05TEST_STACK_H


class Stack {
private:

    int *arr;
    int size;
    int capacity;
    int top_element;
public:
    Stack();

    Stack(int size);

    Stack(const Stack& src);

    Stack(Stack&& src);

    virtual ~Stack();

    Stack& operator=(const Stack &other);

    Stack& operator=(Stack &&other);

    void push(int element);

    int pop();

    int top();

    bool empty();

    void transfer(Stack stack);

    int operator*() const;

    void operator~();

    bool operator!();

    void operator<<(int element);

    void operator>>(int &element);

    void operator<<(Stack s);

    void operator>>(Stack s);



};


#endif //LAB05TEST_STACK_H
