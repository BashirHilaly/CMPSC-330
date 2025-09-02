// 11-13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int table, i, multi, limit;

    cout << "Enter the table number : ";
    cin >> table;
    cout << "What would you like the limit to be? ";
    cin >> limit;

    for (i = 1; i <= limit; i++) {
        multi = table * i;
        cout << table << " x " << i << " = " << multi << "\n";
    }
}
