// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


//Write a C++ program that asks 5 multiple - choice questions about the Philadelphia Eagles, or another topic.
//Each question should have two possible answers.
//Use if statements to check if the user’s response is correct :
//Award 20 points for a correct answer.
//Award 0 points for an incorrect answer.
//
//Display the total score at the end of the quiz.
//
//Use an if statement to evaluate the final score and display a message :
//
//If the score is greater than 80, display : "You are a champion!"
//
//50 & 80 "You are almost a champion. Study more about the Philadelphia Eagles or....!"
//
//Otherwise, display : "Try again!. Study more about the Philadelphia Eagles or....!"


#include <iostream>
#include <cctype>
#include <string>
using namespace std;

// Using "&" for references instead of making (const means we wont modify it inside the function)

// Loops until valid answer
char readChoice(
    const string & prompt,
    const string & valid
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

bool askMultipleChoice2Questions(
    const string & question,
    const string & A,
    const string & B,
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
    cout << "===== STARTUP QUIZ GAME =====\n"
        << "There are 5 questions.\n"
        << "Good luck!\n";

    int score = 0;

    // --- 2-option questions (5 total) ---
    if (askMultipleChoice2Questions(
        "1) A startup is best described as:",
        "A newly founded company aiming for fast growth",
        "A small local business with no plans to expand",
        'A')) score += 20;

    if (askMultipleChoice2Questions(
        "2) Which is more important for a startup in the early stage?",
        "Finding product-market fit",
        "Maximizing short-term profit",
        'A')) score += 20;

    if (askMultipleChoice2Questions(
        "3) Venture capital (VC) funding usually means:",
        "Investors take equity in exchange for funding",
        "A company takes on traditional bank debt",
        'A')) score += 20;

    if (askMultipleChoice2Questions(
        "4) Bootstrapping a startup means:",
        "Growing using your own savings and revenue",
        "Receiving outside investment right away",
        'A')) score += 20;

    if (askMultipleChoice2Questions(
        "5) In a lean startup, the main goal is to:",
        "Build and launch quickly, then iterate based on feedback",
        "Spend years perfecting the product before launching",
        'A')) score += 20;

    cout << "\n===== RESULTS =====\n";
    cout << "Total Score: " << score << "\n";

    if (score > 80) {
        cout << "You are a champion!\n";
    }
    else if (score > 50 && score <= 80) {
        cout << "You are almost a champion. Study more about the startup game.\n";
    }
    else {
        cout << "Try again!. Study more about the startup game.\n";
    }

    return 0;
}
