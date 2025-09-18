// Happy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int score = 100;
    int answer;

    cout << "Welcome to the Positivity & Happiness Quiz!\n";
    cout << "Answer honestly to get a glimpse of how joyful you are feeling.\n\n";

    cout << "Q1) Do you often feel like you don’t have enough social connection?" << endl;
    cout << "1) Very often" << endl;
    cout << "2) Sometimes" << endl;
    cout << "3) Rarely" << endl;
    cout << "4) Never" << endl;
    cin >> answer;
    if (answer == 1) {
        score -= 20;
    }

    cout << "Q2) How frequently do you dwell on guilt or hopeless thoughts?" << endl;
    cout << "1) Almost daily" << endl;
    cout << "2) Occasionally" << endl;
    cout << "3) Rarely" << endl;
    cout << "4) Never" << endl;
    cin >> answer;
    if (answer == 1) {
        score -= 20;
    }

    cout << "Q3) How often do you spend quality time with family or friends?" << endl;
    cout << "1) Very often" << endl;
    cout << "2) A few times a month" << endl;
    cout << "3) Rarely" << endl;
    cout << "4) Almost never" << endl;
    cin >> answer;
    if (answer == 4) {
        score -= 20;
    }

    cout << "Q4) How often do you lose interest or excitement in activities you usually enjoy?" << endl;
    cout << "1) Very often" << endl;
    cout << "2) Sometimes" << endl;
    cout << "3) Rarely" << endl;
    cout << "4) Never" << endl;
    cin >> answer;
    if (answer == 1) {
        score -= 20;
    }

    cout << "Q5) How often do you notice unhealthy eating habits (overeating or skipping meals)?" << endl;
    cout << "1) Very often" << endl;
    cout << "2) Sometimes" << endl;
    cout << "3) Rarely" << endl;
    cout << "4) Never" << endl;
    cin >> answer;
    if (answer == 1) {
        score -= 20;
    }

    cout << endl;
    cout << "Your final score is: " << score << " out of 100" << endl;
    cout << "The higher your score, the brighter your happiness level!" << endl;

    if (score > 90) {
        cout << "You radiate joy and positivity! Keep spreading it around!" << endl;
    }
    else if (score > 60) {
        cout << "You’re doing pretty well overall, but there’s always room for extra smiles." << endl;
        cout << "Tip: Try practicing gratitude daily-list 3 things you’re thankful for." << endl;
    }
    else if (score <= 60 && score > 40) {
        cout << "You seem a bit low in spirits." << endl;
        cout << "Recommendation: Reach out to a friend, go for a nature walk, or listen to uplifting music." << endl;
    }
    else if (score <= 40) {
        cout << "You seem to be feeling quite sad right now." << endl;
        cout << "Recommendation: Please take care of yourself. Talking to a loved one or a mental health professional could really help. Try small steps such as journaling, breathing exercises, or spending time with loved ones" << endl;
    }

    return 0;
}
