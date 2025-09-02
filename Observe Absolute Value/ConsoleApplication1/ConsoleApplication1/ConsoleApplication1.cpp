// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

    double number;
    
    double absValue;
    cout << "Lets observe the absolute value to any number!\n";
    cout << "Input any number on the number line: ";
    cin >> number;

    if (number < 0) {
        // If the number is less than 0 it is negative. To make it positive we gotta mult by -1
        absValue = number * -1;
    }
    else {
        // This already is the absolute value and it includes 0 too
        absValue = number;
    }

    cout << "The absolute value for " << number << " is " << absValue;

    return 0;
}
