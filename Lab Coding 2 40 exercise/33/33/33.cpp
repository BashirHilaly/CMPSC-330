// 33.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    // Initialize arrays
    int a1[5] = { 2, 4, 6, 8, 10 };
    int b1[5] = { 20, 40, 60, 80, 100 };
    int d1[5];   // stores multiplication results
    double e1[5]; // stores division results (use double to keep decimals)

    // Perform multiplication and division
    for (int i = 0; i < 5; i++) {
        d1[i] = a1[i] * b1[i];         // multiply corresponding elements
        e1[i] = static_cast<double>(b1[i]) / a1[i]; // divide corresponding elements
    }

    // Display results
    cout << "Array d1 (a1 * b1): ";
    for (int i = 0; i < 5; i++) {
        cout << d1[i] << " ";
    }

    cout << "\nArray e1 (b1 / a1): ";
    for (int i = 0; i < 5; i++) {
        cout << e1[i] << " ";
    }

    cout << endl;

    return 0;
}
