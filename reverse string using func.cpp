#include <iostream>
#include <string>
using namespace std;

// Function to reverse a string
string reverseString(const string& str) {
    int n = str.length();
    string reversedStr = str;
    for (int i = 0; i < n / 2; ++i) {
        swap(reversedStr[i], reversedStr[n - i - 1]);
    }
    return reversedStr;
}

int main() {
    string inputStr;

    // Input the string from the user
    cout << "Enter a string: ";
    getline(cin, inputStr);

    // Call the reverseString function and display the result
    string reversedStr = reverseString(inputStr);
    cout << "Reversed string: " << reversedStr << endl;

    return 0;
}

