// 40.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 40. Write a function that receives two integers and returns the result of subtracting the second from the first.

// EXERCISE CATEGORIZATION
// Functions:
// - Exercise 38: Function to find greater of two integers
// - Exercise 39: Function to calculate sum of two integers
// - Exercise 40: Function to subtract second integer from first

#include <iostream>
using namespace std;

// Function that receives two integers and returns the result of subtracting the second from the first
int calculateDifference(int num1, int num2) {
    return num1 - num2;
}

int main() {
    int firstNumber, secondNumber, differenceResult;
    
    // Prompt user to enter two integers
    cout << "Enter two integers to calculate their difference:" << endl;
    cout << "(First number - Second number)" << endl;
    cout << "--------------------------------" << endl;
    
    cout << "Enter first integer: ";
    cin >> firstNumber;
    
    cout << "Enter second integer: ";
    cin >> secondNumber;
    
    // Call the function to calculate the difference
    differenceResult = calculateDifference(firstNumber, secondNumber);
    
    // Display the result
    cout << "\nResults:" << endl;
    cout << "--------" << endl;
    cout << "First number: " << firstNumber << endl;
    cout << "Second number: " << secondNumber << endl;
    cout << "Difference (" << firstNumber << " - " << secondNumber << "): " << differenceResult << endl;
    
    return 0;
}
