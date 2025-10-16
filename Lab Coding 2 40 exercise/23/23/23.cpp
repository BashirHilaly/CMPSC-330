// 23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    // Loop through the first 100 even numbers
    for (int i = 1; i <= 100; ++i) {
        sum += 2 * i; // each even number is 2, 4, 6, ..., 200
    }

    cout << "The sum of the first 100 even positive integers is: " << sum << endl;

    return 0;
}
