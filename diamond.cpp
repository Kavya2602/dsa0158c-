#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows for the diamond pattern: ";
    cin >> n;

    // Print the upper half of the diamond (including the middle row)
    for (int i = 1; i <= n; ++i) {
        // Print leading spaces
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }

        // Move to the next line
        cout << endl;
    }

    // Print the lower half of the diamond
    for (int i = n - 1; i >= 1; --i) {
        // Print leading spaces
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}

