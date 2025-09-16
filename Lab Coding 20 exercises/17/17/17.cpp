// 17.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Exchange of two numbers. The number 1 must have the value of the number 2 and the number two must have the value
// of the number 1.


#include <iostream>
using namespace std;

int main()
{
    // Variable intialization
    int num1, num2, temp;

    // Input two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "\nEnter the second number: ";
    cin >> num2;

    cout << "\nBefore the exchange:\n";
    cout << "Number 1 = " << num1 << endl;
    cout << "Number 2 = " << num2 << endl;

    // exchange values using temp variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "\nAfter the exchange:\n";
    cout << "Number 1 = " << num1 << endl;
    cout << "Number 2 = " << num2 << endl;

    return 0;
}
