//
// Created by baloo on 14/11/2022.
//

#include <cstdio>
#include <iostream>
#include "String.h"
#include <cstring>


void String::print() const {
    std::cout << c_str << std::endl;
}

String String::copy() {
    return String(c_str);
}

int String::length() {
    return (int)strlen(c_str);
}

char String::at(int index) {
    return c_str[index];
}

String String::substring(int start, int end) {
    int len = end - start;
    char *s = new char[len];
    for (int i = 0; start <= end; i++) {
        s[i] = c_str[start];
        start++;
    }

    return String(s);
}

String String::substring(int start) {
    return substring(start,length());
}

void String::replace(int index, char c) {
    c_str[index] = c;
}

bool String::equals(String &s1, String &s2) {
    if(s1.length() != s2.length()) return false;
    for(int i = 0;i< s1.length();i++){
        if(s1.c_str[i] != s2.c_str[i]) return false;
    }
    return true;
}
