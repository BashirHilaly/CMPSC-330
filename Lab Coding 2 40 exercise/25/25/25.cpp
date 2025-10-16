// 25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>  // for sqrt()
using namespace std;

int main() {
    double a, b, c, discriminant, root1, root2;

    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    // If a = 0, it is not a quadratic equation
    if (a == 0) {
        cout << "This is not a quadratic equation (a cannot be 0)." << endl;
        return 0;
    }

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    cout << "\nDiscriminant (b² - 4ac) = " << discriminant << endl;

    // Analyze the discriminant
    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Since the discriminant is greater than zero, there are 2 distinct real roots.\n";
        cout << "Root 1 is " << root1 << endl;
        cout << "Root 2 is " << root2 << endl;
    }
    else if (discriminant == 0) {
        // One real root (a double root)
        root1 = -b / (2 * a);
        cout << "Since the discriminant is equal to zero, there is ONE real root (a double root).\n";
        cout << "Root = " << root1 << endl;
    }
    else {
        // Complex (imaginary) roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Since the discriminant is less than zero, there are NO real roots.\n";
        cout << "The roots are complex (imaginary):\n";
        cout << "Root 1 is " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 is " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
