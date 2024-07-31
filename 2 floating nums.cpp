#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    cout << "Enter the first floating-point number: ";
    cin >> num1;
    cout << "Enter the second floating-point number: ";
    cin >> num2;
    double addition = num1 + num2;
    cout << "Addition: " << num1 << " + " << num2 << " = " << addition << endl;
    double subtraction = num1 - num2;
    cout << "Subtraction: " << num1 << " - " << num2 << " = " << subtraction << endl;
    double multiplication = num1 * num2;
    cout << "Multiplication: " << num1 << " * " << num2 << " = " << multiplication << endl;
    if (num2 != 0) {
        double division = num1 / num2;
        cout << "Division: " << num1 << " / " << num2 << " = " << division << endl;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
    }

    return 0;
}

