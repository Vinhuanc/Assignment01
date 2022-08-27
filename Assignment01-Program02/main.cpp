
//
//  ProgramTwo.cpp
//  Assignment01
//
//  Created by Chen, Huan on 8/27/22.
//

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
