#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int A[SIZE], B[SIZE];
    int Addition[SIZE], Subtraction[SIZE], Multiplication[SIZE];
    double Division[SIZE];
    
    // Getting input for array A from user
    cout << "Enter 5 integers for array A:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }
    
    // Same for array B
    cout << "\nEnter 5 integers for array B:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "B[" << i << "] = ";
        cin >> B[i];
    }
    
    // Perform operations in the for loop
    for (int i = 0; i < SIZE; i++) {
        Addition[i] = A[i] + B[i];
        Subtraction[i] = A[i] - B[i];
        Multiplication[i] = A[i] * B[i];
        
        // Error Handling: Handle division by zero
        if (B[i] != 0) {
            Division[i] = static_cast<double>(A[i]) / B[i];
        } else {
            Division[i] = 0.0;
            cout << "Error: Division by zero at index " << i << " (A[" << i << "] / B[" << i << "])" << endl;
        }
    }
    
    // Display results
    cout << "\nResults:" << endl;
    cout << "Index\tA\tB\tAddition\tSubtraction\tMultiplication\tDivision" << endl;
    cout << "----------------------------------------------------------------" << endl;
    
    for (int i = 0; i < SIZE; i++) {
        cout << i << "\t" << A[i] << "\t" << B[i] << "\t" 
             << Addition[i] << "\t\t" << Subtraction[i] << "\t\t" 
             << Multiplication[i] << "\t\t";
        
        if (B[i] != 0) {
            cout << Division[i];
        } else {
            cout << "N/A (div by 0)";
        }
        cout << endl;
    }
    
    return 0;
}
