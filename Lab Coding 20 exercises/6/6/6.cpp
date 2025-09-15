// 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Create a C++ program to find out if the number 1 and the number 2 are even or odd.


#include <iostream>
using namespace std;

bool isEven(int a) {
    int result = a % 2;
    if (result == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    // Var intialization
    int num1, num2;

    cout << "Let's find out if the numbers you input are even or odd!\n";
    cout << "\nInput number 1: ";
    cin >> num1;
    cout << "\nInput number 2: ";
    cin >> num2;

    // For number 1
    if (isEven(num1)) {
        cout << "\nNumber 1 is even!";
    }
    else {
        cout << "\nNumber 1 is odd!";
    }

    // For number 2
    if (isEven(num2)) {
        cout << "\nNumber 2 is even!";
    }
    else {
        cout << "\nNumber 2 is odd!";
    }
    
    return 0;
}
