
//
//  ProgramTwo.cpp
//  Assignment01
//
//  Created by Chen, Huan on 8/27/22.
//
// Program #2 (Id: 165435)
// Write a program that will ask the user to enter their maximum credit and credit already used. The program should then calculate their total remaining credit. Use the source code shown below, adding code as necessary without modifying the existing code.
// The following messages should be used with interfacing with the user:
// “What is your maximum credit?”
// “How much credit have you already used?” “Your remaining credit is $”
 
//#include "ProgramTwo.hpp"
#include <iostream>
using namespace std;
//#include "selfChecker.h"
#define AUTHOR "Huan Chen"
#define ASSIGNMENT 165435
//AssignmentOne>Program#2
int main(){
    double maxCredit, creditUsed, remainingCredit;
    
    cout << "What is your maximum credit?";
    cin >> maxCredit;
    
    cout << "How much credit have you already used?";
    cin >>creditUsed;
    
    remainingCredit = maxCredit - creditUsed;
    cout << "Your remaining credit is $" <<remainingCredit << endl;
    cout << remainingCredit;
    return 0;
}
