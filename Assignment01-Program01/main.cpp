//
//  main.cpp
//  Assignment01
//
//  Created by Chen, Huan on 8/27/22.
//
//Today is 8/27/22
#include <iostream>
using namespace std;
//#include "selfChecker.h"
#define AUTHOR "Huan Chen"
#define ASSIGNMENT 165324
//AssignmentOne>Program#1
int main(){
    double hours, rate, pay;
    
    cout << "How many hours did you work?";
    cin >> hours;
    
    cout << "How much do you ge paid per hour?";
    cin >> rate;
    
    pay = hours * rate;
    
    cout << "You've earned $" << pay << endl;
    return 0;
}
