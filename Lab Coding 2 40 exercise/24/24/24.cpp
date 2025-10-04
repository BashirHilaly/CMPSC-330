// 24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    double a, b, c, x;

    cout << "Enter value for a: ";
    cin >> a;

    cout << "Enter value for b: ";
    cin >> b;

    cout << "Enter value for c: ";
    cin >> c;

    if (a == 0) {
        if (b == c)
            cout << "The equation has infinitely many solutions." << endl;
        else
            cout << "The equation has no solution." << endl;
    }
    else {
        x = (c - b) / a;
        cout << "The value of x is: " << x << endl;
    }

    return 0;
}
