// 1-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	// Variable intialization
	float a, b;

	cout << "Let's do some basic operations with numbers!\n";
	cout << "First input number 1: ";
	cin >> a;
	cout << "\nNow input number 2: ";
	cin >> b;

	if (b == 0) {
		cout << "\n\n Error, second number can not be 0 (undefined)";
		return 0;
	}

	// Operations
	float addition = a + b;
	float subtraction = a - b;
	float multiplcation = a * b;
	float division = a / b;

	cout << "\n a + b = " << addition << "\n";
	cout << "\n a - b = " << subtraction<< "\n";
	cout << "\n a * b = " << multiplcation << "\n";
	cout << "\n a / b = " << division << "\n";

	return 0;
}