// 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Create a program that calculates the perimeter and area of a square

#include <iostream>
using namespace std;

float caluclateArea(float len) {
    // Area = len * width (for square basically len^2)
    return len * len;
}

float calculatePerimeter(float len) {
    // Add all the sides or just mult by 4 for a square
    return len * 4;
}

int main()
{
    float sideLen;
    cout << "Squares have equal sides all around!\nLet's caluclate the permieter and area for one";
    cout << "\nWhat is the length of one side of the square: ";
    cin >> sideLen;

    cout << "\nThe perimeter of the square you chose is:\n" << calculatePerimeter(sideLen);
    cout << "\nThe area of the square you chose is:\n" << caluclateArea(sideLen);

    return 0;
}
