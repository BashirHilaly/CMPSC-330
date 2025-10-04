// 22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    // Loop from 1 to 100 and add each number to sum
    for (int i = 1; i <= 100; ++i) {
        sum += i;
    }

    cout << "The sum of the first 100 positive integers is: " << sum << endl;

    return 0;
}
