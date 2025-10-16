// 37.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 37. Create two 2x2 matrices. Prompt the user to input values for both matrices. 
// Then, perform and display the result of the following operations:
// - Matrix addition
// - Matrix subtraction  
// - Matrix multiplication

// EXERCISE CATEGORIZATION
// Two-dimensional arrays:
// - Exercise 36: 2x2 matrix sum calculation
// - Exercise 37: 2x2 matrix operations (addition, subtraction, multiplication)
//
// One-dimensional arrays:
// - Exercise 34: Array operations (addition, subtraction, multiplication, division)
// - Exercise 35: Array multiplication by scalar

#include <iostream>
using namespace std;

// Function to display a 2x2 matrix
void displayMatrix(int matrix[2][2], const string& title) {
    cout << title << endl;
    cout << "--------" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to perform matrix addition
void matrixAddition(int A[2][2], int B[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Function to perform matrix subtraction
void matrixSubtraction(int A[2][2], int B[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

// Function to perform matrix multiplication
void matrixMultiplication(int A[2][2], int B[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int matrixA[2][2], matrixB[2][2];
    int additionResult[2][2], subtractionResult[2][2], multiplicationResult[2][2];
    
    // Input for Matrix A
    cout << "Enter elements for Matrix A (2x2):" << endl;
    cout << "----------------------------------" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> matrixA[i][j];
        }
    }
    
    // Input for Matrix B
    cout << "\nEnter elements for Matrix B (2x2):" << endl;
    cout << "----------------------------------" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "B[" << i << "][" << j << "] = ";
            cin >> matrixB[i][j];
        }
    }
    
    // Display input matrices
    displayMatrix(matrixA, "Matrix A:");
    displayMatrix(matrixB, "Matrix B:");
    
    // Perform matrix operations
    matrixAddition(matrixA, matrixB, additionResult);
    matrixSubtraction(matrixA, matrixB, subtractionResult);
    matrixMultiplication(matrixA, matrixB, multiplicationResult);
    
    // Display results
    cout << "===== MATRIX OPERATIONS RESULTS =====" << endl;
    displayMatrix(additionResult, "A + B (Addition):");
    displayMatrix(subtractionResult, "A - B (Subtraction):");
    displayMatrix(multiplicationResult, "A * B (Multiplication):");
    
    return 0;
}