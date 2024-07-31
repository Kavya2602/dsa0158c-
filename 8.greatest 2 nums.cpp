#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Prompt the user to enter two integers
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    // Determine which number is greater
    if (num1 > num2) {
        cout << num1 << " is greater than " << num2 << "." << endl;
    } else if (num1 < num2) {
        cout << num2 << " is greater than " << num1 << "." << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}

