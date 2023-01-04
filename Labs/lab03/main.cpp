//#include <iostream>
//#include "String.h"
//
//
//bool isPalindromeHelper(String str, int start, int end) {
//    if (start == end) {
//        return true;
//    }
//    if (str.at(start) != str.at(end)) {
//        return false;
//    }
//    if (start < end + 1) {
//        return isPalindromeHelper(str, start + 1, end - 1);
//    }
//    return true;
//}
//
//bool isPalindrome(String str) {
//    return isPalindromeHelper(str, 0, str.length()-1);
//}
//
//int main() {
//    String s0 = String();
//    String s1 = s0.copy();
//    String s2 = s0.copy();
//    String s3 = s0.copy();
//
//    char c1[5] = "STR1";
//    char c2[5] = "STR2";
//    char c3[5] = "STR3";
//
//
//    s0.assign(c1);
//    s1.assign(c2);
//    s2.assign(c3);
//
//    s0.print();
//    s1.print();
//    s2.print();
//
//    std::cout << "help1" << std::endl;
//    char c4[6] = "radar";
//    s3.assign(c4);
//    std::cout << "help2" << std::endl;
//    if (isPalindrome(s3)) {
//        std::cout << "help3" << std::endl;
//        std::cout << "true";
//    } else { std::cout << "false"; }
//    std::cout << "help4" << std::endl;
//
//
//    return 0;
//}
