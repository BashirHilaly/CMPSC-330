// 28.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program that converts kilometers to meters and meters to kilometers. 
// Prompt the user to enter the value and the direction of conversion.


#include <iostream>
using namespace std;

int main() {
    double value;
    char choice;

    cout << "Choose conversion type:" << endl;
    cout << "Enter 'K' to convert kilometers to meters." << endl;
    cout << "Enter 'M' to convert meters to kilometers." << endl;
    cout << "Your choice: ";
    cin >> choice;

    // Also check for uper or lowercase
    if (choice == 'K' || choice == 'k') {
        cout << "Enter value in kilometers: ";
        cin >> value;
        double meters = value * 1000;
        cout << value << " kilometers = " << meters << " meters." << endl;
    }
    else if (choice == 'M' || choice == 'm') {
        cout << "Enter value in meters: ";
        cin >> value;
        double kilometers = value / 1000;
        cout << value << " meters = " << kilometers << " kilometers." << endl;
    }
    else {
        cout << "Invalid choice. Please enter 'K' or 'M'." << endl;
    }

    return 0;
}
