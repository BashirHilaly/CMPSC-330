// 36.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 36. Create a 2x2 matrix. Prompt the user to enter all the elements. 
// Then, compute and display the sum of all matrix elements.

#include <iostream>
using namespace std;

int main() {
    const int ROWS = 2;
    const int COLS = 2;
    int matrix[ROWS][COLS];
    int sum = 0;
    
    // Prompt user to enter matrix elements
    cout << "Enter the elements of a 2x2 matrix:" << endl;
    cout << "-----------------------------------" << endl;
    
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    
    // Display the entered matrix
    cout << "\nThe matrix you entered:" << endl;
    cout << "----------------------" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    
    // Calculate the sum of all elements
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            sum += matrix[i][j];
        }
    }
    
    // Display the result
    cout << "\nSum of all matrix elements: " << sum << endl;
    
    return 0;
}
