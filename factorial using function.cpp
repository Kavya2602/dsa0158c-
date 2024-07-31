#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;

    // Input the number from the user
    cout << "Enter a positive integer: ";
    cin >> number;

    // Check for non-negative input
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Call the factorial function and display the result
        int result = factorial(number);
        cout << "Factorial of " << number << " = " << result << endl;
    }

    return 0;
}

