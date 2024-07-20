#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    // Ensure the input is a positive integer
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum +=(i*i*i);
    }

    cout << "The sum of square of the first " << n << " natural numbers is: " << sum << endl;
    return 0;
}