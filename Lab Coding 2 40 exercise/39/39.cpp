// 39.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 39. Write a function that receives two integers and returns their sum.

// EXERCISE CATEGORIZATION
// Functions:
// - Exercise 38: Function to find greater of two integers
// - Exercise 39: Function to calculate sum of two integers

#include <iostream>
using namespace std;

// Function that receives two integers and returns their sum
int calculateSum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int firstNumber, secondNumber, sumResult;
    
    // Prompt user to enter two integers
    cout << "Enter two integers to calculate their sum:" << endl;
    cout << "------------------------------------------" << endl;
    
    cout << "Enter first integer: ";
    cin >> firstNumber;
    
    cout << "Enter second integer: ";
    cin >> secondNumber;
    
    // Call the function to calculate the sum
    sumResult = calculateSum(firstNumber, secondNumber);
    
    // Display the result
    cout << "\nResults:" << endl;
    cout << "--------" << endl;
    cout << "First number: " << firstNumber << endl;
    cout << "Second number: " << secondNumber << endl;
    cout << "Sum: " << sumResult << endl;
    
    return 0;
}
