#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, greatest;

    // Input first number
    cout << "Enter first number: ";
    cin >> num1;

    // Input second number
    cout << "Enter second number: ";
    cin >> num2;

    // Input third number
    cout << "Enter third number: ";
    cin >> num3;

    // Assume num1 is the greatest initially
    greatest = num1;

    // Compare with num2
    if (num2 > greatest) {
        greatest = num2;
    }

    // Compare with num3
    if (num3 > greatest) {
        greatest = num3;
    }

    // Display the greatest number
    cout << "The greatest number is: " << greatest;

    return 0;
}