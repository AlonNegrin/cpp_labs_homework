//#include <iostream>
//#include <string>
//#include <sstream>
//#include <vector>
//
//void myPrint() {
//    std::string line;
//    if (std::getline(std::cin, line)) {
//        if (line == "stop") return;
//        myPrint();
//        std::cout << line << std::endl;
//    }
//}
//
//bool string_to_int(std::string str, int &n) {
//    std::stringstream ss(str);
//    ss >> n;
//    if (ss.fail()) {
//        return false;
//    }
//    return true;
//}
//
//
//int main() {
//    std::string line = "504,302,2";
//    int n;
//    std::cout << string_to_int(line, n) << "\n" << n;
//    return 0;
//}
