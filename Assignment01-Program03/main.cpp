
#include <iostream>
using namespace std;

#define AUTHOR "Huan Chen"
#define ASSIGNMENT 165546
//AssignmentOne>Program#3
#include <iostream>

int main(){
    double price, taxRate, salesTax, total;
    
    cout << "Please enter the retail price:";
    cin >> price;
    
    cout << "Please enter the tax rate:";
    cin >> taxRate;
    taxRate = taxRate /100;
    
    salesTax = price * taxRate;
    cout << "The sales tax is: $" << salesTax << endl;
    
    total = salesTax + price;
    cout << "The total price is: $" << total << endl;
    
    
}
