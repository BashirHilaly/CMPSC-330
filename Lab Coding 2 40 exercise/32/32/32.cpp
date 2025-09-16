// 32.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Create two integer arrays :
//
//a1 = { 2, 4, 6, 8, 10 }
//
//b1 = { 20, 40, 60, 80, 100 }
//Add the corresponding elements from both arrays and store the results in a third array c1.


#include <iostream>
using namespace std;

// Function to print an array
void printArray(int arr[], int size) {
    cout << "{ ";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << " }" << endl;
}

int main() {
    int a1[5] = { 2, 4, 6, 8, 10 };
    int b1[5] = { 20, 40, 60, 80, 100 };

    cout << "Let's add the two arrays:\n";
    printArray(a1, 5);
    printArray(b1, 5);

    int c1[5];
    for (int i = 0; i < 5; i++) {
        c1[i] = a1[i] + b1[i];
    }

    cout << "\nAnd the result is: ";
    printArray(c1, 5);

    return 0;
}
