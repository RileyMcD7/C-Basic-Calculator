#include <iostream>
#include <string>
#include "Verify.h"
using namespace std;

char verifyOp(char oper) {
    string oper_list = "+-/*";
    while (oper_list.find(oper) == std::string::npos) {
        std::cout << "Invalid Operator input. Try again: " << endl;
        std::cin >> oper;
        
    }
    return oper;
}




//int verifyNum(int num) {
//    string oper_list = "1234567890";
//    while (oper_list.find(to_str(num)) == std::string::npos) {
//        std::cout << "Invalid number input. Try again: " << endl;
//        std::cin >> num;
//    }
//    return num;
//}