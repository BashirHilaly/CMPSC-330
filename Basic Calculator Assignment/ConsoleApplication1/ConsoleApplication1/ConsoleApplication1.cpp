// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    // Defined numbers for the operation
    float num1, num2;

    // Character representing the operation
    char operation;

    cout << "Welcome to CMPSCI 330. I am your personal calculator!\n";

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "\nEnter the second number: ";
    cin >> num2;

    cout << "\nChoose operation: \na=Addition\ns=Subtraction\nm=Multiplication\nd=Division";
    cout << "\nEnter your choice: ";
    cin >> operation;

    switch (operation) {
        case 'a':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case 's':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case 'm':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case 'd':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
                break;
            }
            else {
                cout << "Error! Division by zero is undefined. \n";
                break;
            }
        default:
            cout << "Invalid option!\n";
    }

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

