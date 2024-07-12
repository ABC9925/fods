#include<iostream>
using namespace std;

int main() {
    int n;

    // Prompt user to enter the number of natural numbers to display
    cout<<"Enter the number of natural numbers to display: "<<endl;
    cin>>n;

    // Display the first n natural numbers
    cout << "First " << n << " natural numbers are: "<<endl;
    for (int i = 1; i <= n; ++i) {
        cout << i << " "<<endl;;
    }
    

    return 0;
}