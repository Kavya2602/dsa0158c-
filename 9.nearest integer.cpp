#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double num;

    cout << "Enter a floating-point number: ";
    cin >> num;

    int floorValue = static_cast<int>(floor(num));
    int ceilValue = static_cast<int>(ceil(num));

    int nearestInteger;
    if (num - floorValue < ceilValue - num) {
        nearestInteger = floorValue;
    } else {
        nearestInteger = ceilValue;
    }
    cout << "The floor value is: " << floorValue << endl;
    cout << "The ceil value is: " << ceilValue << endl;
    cout << "The nearest integer is: " << nearestInteger << endl;

    return 0;
}

