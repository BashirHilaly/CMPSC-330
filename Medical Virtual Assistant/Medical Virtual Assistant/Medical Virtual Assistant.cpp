// Medical Virtual Assistant.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Medical Source: https://www.cdc.gov/obesity/index.html

#include <iostream>
using namespace std;

int main() {
    string questions[10] = {
        "I eat fruits and vegetables with most of my meals.",
        "I consume sugary drinks (soda, energy drinks, sweetened juices).",
        "I engage in at least 30 minutes of physical activity per day.",
        "I often eat fast food, fried food, or processed snacks.",
        "I eat portion sizes larger than I need.",
        "I spend more than 4 hours sitting daily.",
        "I get at least 7 hours of sleep on most nights.",
        "I snack late at night or when I am not hungry.",
        "I drink water instead of soda or juice most of the time.",
        "I feel satisfied with my current weight and lifestyle habits."
    };

    int score = 0, response;

    cout << "Welcome to the Obesity Risk Virtual Assistant!\n";
    cout << "Please answer each question with:\n";
    cout << "1 = Rarely or Never, 2 = Sometimes, 3 = Often or Always\n\n";

    for (int i = 0; i < 10; i++) {
        cout << questions[i] << "\nYour answer: ";
        cin >> response;

        // Validate input
        while (response < 1 || response > 3) {
            cout << "Invalid input. Enter 1, 2, or 3: ";
            cin >> response;
        }

        score += response;
    }

    cout << "\nYour total score is: " << score << " out of 30.\n";

    if (score >= 24) {
        cout << "Level A – Low Risk: You maintain habits that lower obesity risk.\n";
        cout << "Keep eating balanced meals, exercising, and limiting sugary foods.\n";
    }
    else if (score >= 16) {
        cout << "Level B – Moderate Risk: You have some risk factors.\n";
        cout << "Try reducing fast food, improving sleep, and increasing physical activity.\n";
    }
    else {
        cout << "Level C - High Risk: You may be at high risk for obesity.\n";
        cout << "Consider seeking medical advice and making gradual lifestyle changes.\n";
    }

    return 0;
}
