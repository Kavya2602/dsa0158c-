#include <iostream>
using namespace std;

// Function to swap numbers using call by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue: a = " << a << ", b = " << b << endl;
}

// Function to swap numbers using call by reference
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Call by value
    swapByValue(num1, num2);
    cout << "After swapByValue: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Call by reference
    swapByReference(num1, num2);
    cout << "After swapByReference: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}

