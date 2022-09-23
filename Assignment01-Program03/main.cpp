// Program #3 (Id: 165546)
// Write a program that will calculate the total for a retail sale. The program should ask the user for the retail price of the item being purchased and the sales tax rate. Once these items have been entered, the program should calculate and display the sales tax for the purchase and the total of the sale.
// The following messages should be used with interfacing with the user: “Please enter the retail price:”
// “Please enter the tax rate:”
// “The sales tax is: $”
// “The total price is: $”
// Hint: Copy and modify the previous programs! A good variable definition statement would be: double price, taxRate, salesTax, total;
// Hint: the tax rate will be entered as if it was [value]%, this means you need to modify the value in order to use it in a numeric calculation.
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
