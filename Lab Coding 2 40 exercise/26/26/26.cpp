// 26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int N;
    int sum = 0;

    cout << "Enter a positive integer (N > 0): ";
    cin >> N;

    if (N <= 0) {
        cout << "Error: N must be greater than 0." << endl;
    }
    else {
        for (int i = 1; i <= N; ++i) {
            sum += i;
        }
        cout << "The sum of the first " << N << " positive integers is: " << sum << endl;
    }

    return 0;
}
