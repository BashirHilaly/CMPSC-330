// 38.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 38. Write a function that receives two integers and returns the greater of the two.

// EXERCISE CATEGORIZATION
// Functions:
// - Exercise 38: Function to find greater of two integers

#include <iostream>
using namespace std;

// Function that receives two integers and returns the greater of the two
int findGreater(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int firstNumber, secondNumber, greaterNumber;
    
    // Prompt user to enter two integers
    cout << "Enter two integers to find the greater one:" << endl;
    cout << "------------------------------------------" << endl;
    
    cout << "Enter first integer: ";
    cin >> firstNumber;
    
    cout << "Enter second integer: ";
    cin >> secondNumber;
    
    // Call the function to find the greater number
    greaterNumber = findGreater(firstNumber, secondNumber);
    
    // Display the result
    cout << "\nResults:" << endl;
    cout << "--------" << endl;
    cout << "First number: " << firstNumber << endl;
    cout << "Second number: " << secondNumber << endl;
    cout << "Greater number: " << greaterNumber << endl;
    
    return 0;
}
