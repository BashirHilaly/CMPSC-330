// 14.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Hypotenuse of a right triangle/Pythagoras theorem

#include <iostream>
#include <cmath>
using namespace std;

// Pythagoras theorem: a^2 + b^2 = c^2

double calculateHypotenuse(double a, double b) {
    double cSquared = a * a + b * b;
    float answer = sqrt(cSquared);
    return answer;
}

int main()
{
    double adjacent, opposite;
    cout << "Let's learn about the pythagoras theorem. We will use it to find the HYPOTENUSE of a right triangle!\n";
    cout << "The theorem is essentialy: \n";
    cout << "The hypotenuse of a right traingle is equal to:\n";
    cout << "\ta^2 + b ^2";
    cout << "\nIn this case\n\ta = adjacent edge\n\tb = opposite edge;";

    cout << "\n\nLet's do an example";
    cout << "\nInput the length of the adjacent edge: ";
    cin >> adjacent;
    cout << "\nInput the length of the opposite edge: ";
    cin >> opposite;

    cout << "\n\nBased on the inputs, the hypotenuse of this right traingle is:\n" << calculateHypotenuse(adjacent, opposite);

    return 0;
}

