// 20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a, b, sum;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "\nEnter the second number: ";
    cin >> b;

    // Square each number and add
    sum = (a * a) + (b * b);

    cout << "\nThe sum of the squares is: " << sum;

    return 0;
}
