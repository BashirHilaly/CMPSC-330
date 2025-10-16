// 21.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program that prompts the user to enter three numbers, then determines and displays the largest and smallest among them.

#include <iostream>
using namespace std;

int main()
{
    // Variable initialization
    double num1, num2, num3;

    // get the numbers from user
    cout << "Enter three numbers separated by spaces: ";
    cin >> num1 >> num2 >> num3;

    // Assume first number is both min and max initially
    double largest = num1;
    double smallest = num1;

    // Check against second number
    if (num2 > largest)
        largest = num2;
    if (num2 < smallest)
        smallest = num2;

    // Check against third number
    if (num3 > largest)
        largest = num3;
    if (num3 < smallest)
        smallest = num3;

    // Output results
    cout << "The largest number is: " << largest << endl;
    cout << "The smallest number is: " << smallest << endl;

    return 0;
}
