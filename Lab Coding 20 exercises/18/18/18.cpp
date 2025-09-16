// 18.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Create an algorithm that shows me the smallest of 3 numbers.


#include <iostream>
using namespace std;

int main()
{
    int a, b, c, smallest;

    cout << "Let's find the smallest number of 3 numbers\n";
    cout << "Enter the first number: ";
    cin >> a;
    cout << "\nEnter the second number: ";
    cin >> b;
    cout << "\nEnter the third number: ";
    cin >> c;

    // lets assume a is the smallest

    smallest = a;

    if (b < smallest) {
        smallest = b;
    }
    if (c < smallest) {
        smallest = c;
    }

    cout << "\nThe smallest number is " << smallest;
    return 0;
}
