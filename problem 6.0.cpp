#include <iostream>
using namespace std;

int main() {
    
    int num1, num2, remainder;

    
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    
    if (num2 == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
    } else {
        
        remainder = num1 % num2;

        
        cout << "The remainder when " << num1 << " is divided by " << num2 << " is: " << remainder << endl;
    }

    return 0;
}