//#include <iostream>
//#include "Stack.h"
//
//void reverse(Stack& stack){
//    if(!stack) return;
//    auto *temp1 = new Stack();
//    auto *temp2 = new Stack();
//    stack>>*temp1;
//    *temp1>>*temp2;
//    *temp2>>stack;
//    delete temp1;
//    delete temp2;
//}
//
//int main() {
//    Stack stack = Stack();
//    stack<<1;
//    stack<<2;
//    stack<<3;
//    stack<<4;
//    int top = *stack;
//    std::cout << top << std::endl;
//    (!stack) ? std::cout << "stack is empty\n" : std::cout << "stack is not empty\n";
//    ~stack;
//    (!stack) ? std::cout << "stack is empty\n" : std::cout << "stack is not empty\n";
//    stack<<5;
//    stack>>top;
//    std::cout << top << std::endl;
//    stack<<6;
//    stack<<7;
//    stack<<8;
//    std::cout << *stack;
//
//
//
//    return 0;
//}
