// 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 7.- Create a program to find out if the number 1 and number 2 is a positive, negative or ZERO


#include <iostream>
using namespace std;


int main()
{
    float num1, num2;
    cout << "Let's find out if sum numbers are positive negative or zero";
    cout << "\nInput number 1: ";
    cin >> num1;
    cout << "\nInput number 2: ";
    cin >> num2;

    // For number 1
    if (num1 == 0) {
        cout << "\nNumber 1 is Zero!";
    }
    else if (num1 > 0) {
        cout << "\nNumber 1 is positive!";
    }
    else {
        cout << "\nNumber 1 is negative!";
    }
    cout << "\n";
    // For number 2
    if (num2 == 0) {
        cout << "\nNumber 2 is Zero!";
    }
    else if (num2 > 0) {
        cout << "\nNumber 2 is positive!";
    }
    else {
        cout << "\nNumber 2 is negative!";
    }
}
