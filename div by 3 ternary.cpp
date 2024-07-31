#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;
    string result = (num % 3 == 0) ? "divisible by 3" : "not divisible by 3";
    cout << "The number " << num << " is " << result << "." << endl;

    return 0;
}

