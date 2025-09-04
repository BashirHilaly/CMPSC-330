// 8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    double num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Negative numbers don't have square root";
        return 0;
    }
    else {
        cout << "The square root is: " << sqrt(num);
    }
    return 0;
}
