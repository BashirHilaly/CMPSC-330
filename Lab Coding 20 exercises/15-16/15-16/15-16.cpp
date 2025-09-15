// 15-16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Develop an algorithm that changes from dollars to euros and euros to dollars. 
// Enter the current currency exchange rate.

// Convert dollars to euros
double dollarsToEuros(double dollars, double rate) {
    return dollars * rate;
}

// Convert euros to dollars
double eurosToDollars(double euros, double rate) {
    return euros / rate;
}

// First lets ask what we would like to exchange. Then ask the rate. Then convert.


int main()
{
    // Here we hold our exhange rate
    double oneDollarIs;
    // Here we find out what we will exhange ('d' or 'e')
    char exchange;
    // Amount to exchange
    double amount;

    cout << "What would you like to exchange? dollars or euros? ('d' or 'e'): ";
    cin >> exchange;
    //// Validate
    if (exchange != 'd' && exchange != 'e') {
        cout << "Error: Invalid input";
        return 0;
    }

    cout << "What is the current exhange rate? (How much is 1 dollar worth in euros): ";
    cin >> oneDollarIs;

    cout << "\nEnter the amount you want to exchange: ";
    cin >> amount;

    if (exchange == 'd') {
        double result = dollarsToEuros(amount, oneDollarIs);
        cout << amount << " dollars = " << result << " euros" << endl;
    }
    else {
        double result = eurosToDollars(amount, oneDollarIs);
        cout << amount << " euros = " << result << " dollars" << endl;
    }

    return 0;
}

