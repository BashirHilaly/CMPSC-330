// 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Function to find the average
float averageOfTwoNumbers(float num1, float num2) {
    return (num1 + num2) / 2;
}

int main()
{
    // Initialize variables
    float a, b;

    cout << "Let's average two numbers!\n";
    cout << "Input the first number: ";
    cin >> a;
    cout << "\nInput the second number: ";
    cin >> b;

    // calculation
    cout << "\nThe average of those two numbers is: " << averageOfTwoNumbers(a, b);

}
