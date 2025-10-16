// 27.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program that calculates the sum of the first N even positive integers. The value of N must be entered by the user and must be greater than 0.


#include <iostream>
using namespace std;

int main() {
    int N;
    int sum = 0;

    cout << "Enter a positive integer (N > 0): ";
    cin >> N;

    if (N <= 0) {
        cout << "Can not compute: N must be greater than 0." << endl;
    }
    else {

        for (int i = 1; i <= N; ++i) {
            sum += 2 * i; // even numbers are 2, 4, 6, 8, ...
        }

        cout << "The sum of the first " << N << " even positive integers is: " << sum << endl;
    }

    return 0;
}
