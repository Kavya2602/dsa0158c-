#include <iostream>
using namespace std;

int main() {

    int n1, n2, max;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;

    max = (n1 > n2) ? n1 : n2;

    cout << "The largest number between " << n1 << " and " << n2 << " is " << max << "." << endl;

    return 0;
}

