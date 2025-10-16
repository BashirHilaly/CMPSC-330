// 29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cctype>
#include <string>
using namespace std;

// Using "&" for references instead of making (const means we wont modify it inside the function)

// Loops until valid answer
char readChoice(
    const string& prompt, 
    const string& valid
) {
    char ch;
    while (true) {
        cout << prompt;
        if (!(cin >> ch)) return ' '; // basic guard 

        ch = toupper(static_cast<unsigned char>(ch));

        if (valid.find(ch) != string::npos) return ch;

        cout << "Invalid choice. Please enter one of [" << valid << "].\n";
    }
}

bool askMultipleChoice4Questions(
    const string& question,
    const string& A, 
    const string& B, 
    const string& C, 
    const string& D,
    char correct
) {
    cout << "\n" << question << "\n"
        << "A) " << A << "\n"
        << "B) " << B << "\n"
        << "C) " << C << "\n"
        << "D) " << D << "\n";

    char ans = readChoice("Your answer (A-D): ", "ABCD");

    if (ans == toupper(correct)) {
        cout << "Correct!\n";
        return true;
    }
    else {
        cout << "Incorrect. Correct answer: " << (char)toupper(correct) << ".\n";
        return false;
    }
}

bool askMultipleChoice2Questions(
    const string& question,
    const string& A, 
    const string& B,
    char correct) {

    cout << "\n" << question << "\n"
        << "A) " << A << "\n"
        << "B) " << B << "\n";

    char ans = readChoice("Your answer (A-B): ", "AB");

    if (ans == toupper(correct)) {
        cout << "Correct!\n";
        return true;
    }
    else {
        cout << "Incorrect. Correct answer: " << (char)toupper(correct) << ".\n";
        return false;
    }
}

int main() {
    cout << "===== QUIZ GAME =====\n"
        << "Each correct answer is worth 100 points.\n"
        << "Good luck!\n";

    int score = 0;

    // --- 4-option questions (3 total) ---
    if (askMultipleChoice4Questions(
        "1) Which planet is known as the Red Planet?",
        "Venus", "Mars", "Jupiter", "Mercury", 'B')) score += 100;

    if (askMultipleChoice4Questions(
        "2) Who wrote the play 'Romeo and Juliet'?",
        "William Shakespeare", "Charles Dickens", "Jane Austen", "Mark Twain", 'A')) score += 100;

    if (askMultipleChoice4Questions(
        "3) What is the value of 7! (factorial)?",
        "5040", "720", "343", "120", 'A')) score += 100;

    // --- 2-option questions (2 total) ---
    if (askMultipleChoice2Questions(
        "4) The Great Wall of China is visible from the Moon with the naked eye.",
        "True", "False", 'B')) score += 100;

    if (askMultipleChoice2Questions(
        "5) The derivative of sin(x) is cos(x).",
        "True", "False", 'A')) score += 100;

    cout << "\n===== RESULTS =====\n";
    cout << "Total Score: " << score << " / 500\n";

    if (score > 300) {
        cout << "YOU ARE THE BEST!\n";
    }
    else {
        cout << "Never Give Up.\n";
    }

    return 0;
}
