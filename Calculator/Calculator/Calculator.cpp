// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



// figure out how to use git on a set of folders like this
#include <iostream>
#include <string>
#include "Verify.h"
//#include <cstring>
using namespace std;

int main() 
{
    //intro
    std::cout << "Hello World!\n";

    //make these into functions that I include
    
    int i = 0;
        while (i == 0) {
            //grab user input
            int base = 0;
            std::cout << "Input first number:\n";
            std::cin >> base;
            
            //select operation to do    
            std::cout << "Input operation:\n";
            char oper = '+';
            std::cin >> oper;

            //verify operation is acceptable
            //string oper_list = "+-/*";
            //while (oper_list.find(oper) == std::string::npos) {
            //    std::cout << "Invalid Operator input. Try again: ";
            //    std::cin >> oper;
            //}

            oper = verifyOp(oper);
                           
            //grab second input
            std::cout << "Input second number:\n";
            int modify = 0;
            std::cin >> modify;

            //complete calculation
            switch (oper) {
            case '+':
                base = base + modify;
                break;
            case '-':
                base = base - modify;
                break;
            case '/':
                base = base / modify;
                break;
            case '*':
                base = base * modify;
                break;
            default:
                std::cout << "Invalid ";
                // need this to error out if selected - I am not sure how I got the program to run and the invalid case
            }

            //output answer
            std::cout << "Answer: " << base << std::endl;

            //ask to continue or stop
            //need this to be associated with escape instead of an input
            //then can continue to modify the base value so we can do more operations
            char YN = 'N';
            std::cout << "Do you want to continue? [Y N]";
            std::cin >> YN;
            if (YN == 'Y') {
                i = 0;
            }
            else {
                //Can reverse this and probably remove a couple of lines
                i = 1;
            }
        };
    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
