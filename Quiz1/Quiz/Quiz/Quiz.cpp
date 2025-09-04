// Quiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Exercise 2, Legal Age Check
int LegalAgeCheck()
{
    // Variable definition
    int userAge;
    bool isAdult;

    // Get user input
    cout << "This is the legal age check.\nWhat is your age? ";
    cin >> userAge;

    // Error handling (cant be negative years old)
    if (userAge < 0) {
        cout << "Can't be less than 0 years old";
        return 0;
    }

    // Update isAdult with the status of the user's age
    if (userAge >= 18) {
        isAdult = true;
    }
    else {
        isAdult = false;
    }

    // Return the correct identification based on our updated boolean
    if (isAdult) {
        cout << "You are an adult";
    }
    else {
        cout << "You are a minor";
    }

    cout << "\n";
    return 0;
}

// Exercise 4, Compare 2 numbers
int CompareTwoNumbers() {

    // Variable definition
    int num1, num2;

    // User inputs
    cout << "Let's compare numbers!\n";
    cout << "Input first number: ";
    cin >> num1;
    cout << "Input second number: ";
    cin >> num2;

    // Checks which number is greater than the other
    if (num1 > num2) {
        cout << "The first number is greater than the second";
    }
    else if (num2 > num1) {
        cout << "The second number is greater than the first";
    }
    else {
        // This means they must be equal
        cout << "the two numbers are equal";
    }

    cout << "\n";
    return 0;
}

// Exercise 4, Leap Year Tracker
int LeapYearTracker() {
    
    // Variable definition
    int year;
    bool isLeapYear;

    // Inputs
    cout << "Input a year and we will check if it is a leap year: (e.g. 2020) ";
    cin >> year;

    // Error handling (cant have a negative year)
    if (year < 0) {
        cout << "Year can not be negative";
        return 0;
    }

    /*
        So in order to figure this out, 
        first test case is that the year is divisible by 4
        if not then it cant be a leap year.
        if so it can be ONLY IF it is not divisible by 100 or 400 
    */
    if (year % 4 == 0) {
        if ((year % 100 == 0) || (year % 400 == 0)) {
            isLeapYear = false;
        }
        else {
            isLeapYear = true;
        }
    }
    else {
        isLeapYear = false;
    }

    // Print result
    if (isLeapYear) {
        cout <<"is a leap year!";
    }
    else {
        cout <<"is not a leap year!";
    }

    cout << "\n";
    return 0;
}

// Exercise 6, Pass or Fail Grade
int PassOrFailGrade() {

    // Variable definition
    int grade;
    int checkPoint = 6; // This is what we use to determine whether its a passing grade
    bool hasPassed;

    // Inputs
    cout << "Input a grade to see if it passes (0-10):";
    cin >> grade;

    // Error handling
    if (grade > 10 || grade < 0) {
        cout << "Invalid grade";
        return 0;
    }

    if (grade >= checkPoint) {
        hasPassed = true;
    }
    else {
        hasPassed = false;
    }

    if (hasPassed) {
        cout << "Pass";
    }
    else {
        cout << "Fail";
    }

    cout << "\n";
    return 0;
}

// Exercise 7, Number in range
int NumberInRange() {

    // Variable definition
    int number;
    int min = 1;
    int max = 100;

    // User inputs
    cout << "Enter a number and wee will see if it is between 1-100 (inclusive)";
    cin >> number;

    if (number > max || number < min) {
        cout << "Out of range.";
    }
    else {
        cout << "In range";
    }

    cout << "\n";
    return 0;
}

// Exercise 8, Largest of three numbers
int LargestOfThreeNumbers() {
    // Variable definition
    int num1, num2, num3;
    int largest;

    // User inputs
    cout << "Enter 3 numbers and we will find the largest\n";
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    cout << "Number 3: ";
    cin >> num3;


    // Compare first two, then compare the largest of those to the last number
    if (num1 > num2) {
        // Num1 is bigger than Num 2
        if (num1 > num3) {
            // Num 1 is largest
            largest = num1;
            // cout << "Largest Number: " + num1;
        }
        else {
            // Num 3 is largest
            largest = num3;
            // cout << "Largest Number: " + num3;
        }
    }
    else {
        if (num2 > num3) {
            // Num2 is largest
            largest = num2;
            // cout << "Largest Number: " + num2;
        }
        else {
            // Num 3 is largest
            largest = num3;
            // cout << "Largest Number: " + num3;
        }
    }

    cout << "\nThe largest number is: ";
    cout << largest;

    cout << "\n";
    return 0;
}

// Exercise 9, can you vote
int CanYouVote() {
    // Variables
    int age;
    int minVoteAge = 16;

    cout << "Let's check if you can vote. \nWhat is your age";
    cin >> age;

    if (age >= minVoteAge) {
        cout << "You can vote";
    }
    else {
        cout << "You can not vote";
    }

    cout << "\n";
    return 0;
}

int main()
{
    cout << "Hello World!\n";
    LegalAgeCheck();
    CompareTwoNumbers();
    LeapYearTracker();
    PassOrFailGrade();
    NumberInRange();
    LargestOfThreeNumbers();
    CanYouVote();

    return 0;
}
