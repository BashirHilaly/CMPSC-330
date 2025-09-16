// MatrixOperations.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 

#include <iostream>
using namespace std;

// Here we can just use a global variable for the size for the 3x3x3 arrays
const int SIZE = 3;

void addArrays(int a[SIZE][SIZE][SIZE], int b[SIZE][SIZE][SIZE], int c[SIZE][SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                c[i][j][k] = a[i][j][k] + b[i][j][k];
            }
        }
    }
}

// Calculating d = 2a - b
void computeD(int a[SIZE][SIZE][SIZE], int b[SIZE][SIZE][SIZE], int d[SIZE][SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                d[i][j][k] = 2 * a[i][j][k] - b[i][j][k];
            }
        }
    }
}

// Function to print a 3D array
void printArray(int arr[SIZE][SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        cout << "Layer " << i << ":\n";
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main() {
    // Initialize all the arrays here
    int a[SIZE][SIZE][SIZE], b[SIZE][SIZE][SIZE];
    int c[SIZE][SIZE][SIZE], d[SIZE][SIZE][SIZE];

    cout << "Let's create two 3D arrays and perform some operations\n";

    // Input for array a
    cout << "Enter values for array a:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                cout << "a[" << i << "][" << j << "][" << k << "]: ";
                cin >> a[i][j][k];
            }
        }
    }

    // Input for array b
    cout << "\nEnter values for array b:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                cout << "b[" << i << "][" << j << "][" << k << "]: ";
                cin >> b[i][j][k];
            }
        }
    }

    // Compute results
    addArrays(a, b, c);
    computeD(a, b, d);

    // Display results
    cout << "\nArray c = a + b:\n";
    printArray(c);

    cout << "\nArray d = 2a - b:\n";
    printArray(d);

    return 0;
}
