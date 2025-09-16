// 19.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, largest;

    cout << "Let's find the largest number of 3 numbers\n";
    cout << "Enter the first number: ";
    cin >> a;
    cout << "\nEnter the second number: ";
    cin >> b;
    cout << "\nEnter the third number: ";
    cin >> c;

    // lets assume a is the largest
    largest = a;

    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }

    cout << "\nThe largest number is " << largest;
    return 0;
}