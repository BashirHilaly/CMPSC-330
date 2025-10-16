// 30.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Using base from exercise 29

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

// Reads and validates user choice
char readChoice(const string& prompt, const string& valid) {
    char ch;
    while (true) {
        cout << prompt;
        if (!(cin >> ch)) return ' '; // basic guard
        ch = toupper(static_cast<unsigned char>(ch));
        if (valid.find(ch) != string::npos) return ch;
        cout << "Invalid choice. Please enter one of [" << valid << "].\n";
    }
}

// Function for 4-option questions
char askMultipleChoice4Questions(
    const string& question,
    const string& A,
    const string& B,
    const string& C,
    const string& D
) {
    cout << "\n" << question << "\n"
        << "A) " << A << "\n"
        << "B) " << B << "\n"
        << "C) " << C << "\n"
        << "D) " << D << "\n";
    return readChoice("Your answer (A-D): ", "ABCD");
}

// Function for 2-option questions
char askMultipleChoice2Questions(
    const string& question,
    const string& A,
    const string& B
) {
    cout << "\n" << question << "\n"
        << "A) " << A << "\n"
        << "B) " << B << "\n";
    return readChoice("Your answer (A-B): ", "AB");
}

int main() {
    cout << "===== T-SHIRT PERSONALIZATION QUIZ =====\n";

    string sleeveType, printType, design, color, size, fit;

    // 1. Sleeve type (2 options)
    char q1 = askMultipleChoice2Questions(
        "1) What sleeve type do you prefer?",
        "Short sleeves",
        "Long sleeves"
    );
    sleeveType = (q1 == 'A') ? "short-sleeved" : "long-sleeved";

    // 2. With or without print (2 options)
    char q2 = askMultipleChoice2Questions(
        "2) Do you want a print on your t-shirt?",
        "Yes",
        "No"
    );
    printType = (q2 == 'A') ? "with a print" : "without a print";

    // 3. Print design (4 options)
    char q3 = askMultipleChoice4Questions(
        "3) Choose your print design preference:",
        "Abstract",
        "Animal (e.g., eagle, tiger)",
        "Quote or Text",
        "Minimal Logo"
    );
    switch (q3) {
    case 'A': design = "an abstract print"; break;
    case 'B': design = "an animal print"; break;
    case 'C': design = "a quote print"; break;
    case 'D': design = "a minimal logo print"; break;
    }

    // 4. Size (4 options)
    char q4 = askMultipleChoice4Questions(
        "4) What size do you wear?",
        "S", "M", "L", "XL"
    );
    switch (q4) {
    case 'A': size = "S"; break;
    case 'B': size = "M"; break;
    case 'C': size = "L"; break;
    case 'D': size = "XL"; break;
    }

    // 5. Color (4 options)
    char q5 = askMultipleChoice4Questions(
        "5) Choose your preferred color:",
        "Black", "White", "Blue", "Red"
    );
    switch (q5) {
    case 'A': color = "black"; break;
    case 'B': color = "white"; break;
    case 'C': color = "blue"; break;
    case 'D': color = "red"; break;
    }

    // 6. Fit style (4 options)
    char q6 = askMultipleChoice4Questions(
        "6) Choose your preferred fit:",
        "Regular", "Slim", "Oversized", "Athletic"
    );
    switch (q6) {
    case 'A': fit = "regular fit"; break;
    case 'B': fit = "slim fit"; break;
    case 'C': fit = "oversized fit"; break;
    case 'D': fit = "athletic fit"; break;
    }

    // Summary
    cout << "\n===== YOUR CUSTOM T-SHIRT =====\n";
    cout << "You prefer a " << color << ", " << sleeveType
        << " t-shirt, size " << size << ", " << fit << ", "
        << printType;
    if (printType == "with a print") cout << " (" << design << ")";
    cout << ".\n";

    return 0;
}
