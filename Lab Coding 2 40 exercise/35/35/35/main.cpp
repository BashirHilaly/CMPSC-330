//
//  main.cpp
//  35
//
// 35. Write a program that prompts the user to input 5 elements into an array. Then prompt the user to input a number n. Multiply each element in the array by n and store the results in a second array. Display the new array.

#include <iostream>
using namespace std;

// Function to print an array
void printArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}

int main(int argc, const char * argv[]) {
    const int SIZE = 5;
    int userArray[SIZE];
    int userNumber;
    int resultArray[SIZE];
    
    cout << "Enter 5 integers for array your array:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "YourArray[" << i << "] = ";
        cin >> userArray[i];
    }
    
    cout << "\nNow enter a number n,that we can multiply with each element of your array to make a new one!";
    cout << "\nn = ";
    cin >> userNumber;
    
    
    for (int i = 0; i < SIZE; i++) {
        resultArray[i] = userArray[i] * userNumber;
    }
    
    // Print the arrays
    cout << "\nThe original array: ";
    printArray(userArray, SIZE);
    
    cout << "\nThe new array: ";
    printArray(resultArray, SIZE);
    
    return 0;
}
