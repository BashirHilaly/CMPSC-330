// 31.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Create an array of integers with 5 elements: {2, 4, 6, 8, 10}. 
// Write a program that adds all the elements and displays the total.



#include <iostream>
using namespace std;

int main()
{
    int array[5] = { 2, 4, 6, 8, 10 };

    cout << "We have the array of integers: {2, 4, 6, 8, 10}\nLet's Add them all up\n";

    int total = 0;
    int length = sizeof(array) / sizeof(array[0]); // this is how to find the length of an array

    // cout << "The length of the array is: " << length;
    for (int i = 0; i < length; i++) {
        total = total + array[i];
    }

    cout << "\nAfter all the addition, our array total is: " << total;
}