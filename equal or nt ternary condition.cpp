#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    string result = (num1 == num2) ? "equal" : "not equal";
    cout << "The numbers " << num1 << " and " << num2 << " are " << result << "." << endl;

    return 0;
}

