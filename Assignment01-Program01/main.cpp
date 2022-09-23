//
//  main.cpp
//  Assignment01
//
//  Created by Chen, Huan on 8/27/22.
//
//Today is 8/27/22
// Program #1 (Id: 165324)
// Enter Program 1-1 on page 9 of the textbook (also shown below). Do not change any of the string literals. Test the code with your own input samples to see if you can find any quirks in how the program interacts with the user.
 
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
