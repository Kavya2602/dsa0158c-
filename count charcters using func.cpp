#include <iostream>
#include <string>
using namespace std;

// Function to count the number of characters in a string
int countCharacters(const string& str) {
    int count = 0;
    for (char c : str) {
        count++;
    }
    return count;
}

int main() {
    string inputStr;

    // Input the string from the user
    cout << "Enter a string: ";
    getline(cin, inputStr);

    // Call the countCharacters function and display the result
    int characterCount = countCharacters(inputStr);
    cout << "The number of characters in the string is: " << characterCount << endl;

    // Alternatively, using the built-in length() method
    cout << "Using length() method, the number of characters is: " << inputStr.length() << endl;

    return 0;
}

