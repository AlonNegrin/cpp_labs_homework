//
// Created by baloo on 14/11/2022.
//

#ifndef LAB03_STRING_H
#define LAB03_STRING_H


class String {
public:
    String() { c_str = nullptr; }

    explicit String(char *cStr) : c_str(cStr) {}

    virtual ~String() { delete[]c_str; }

    void assign(char *cStr) { c_str = cStr; }

    void print() const;

    String copy();

    int length();

    char at(int index);

    String substring(int start, int end);

    String substring(int start);

    void replace(int index, char c);

    static bool equals(String &s1, String &s2);


private:
    char *c_str;
};


#endif //LAB03_STRING_H
