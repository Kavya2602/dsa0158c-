#include <iostream>
#include <cmath> // for M_PI
using namespace std;

// Function to calculate the area of a circle
double calculateArea(double radius) {
    return M_PI * radius * radius;
}

int main() {
    double radius;

    // Input the radius from the user
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Call the calculateArea function and display the result
    double area = calculateArea(radius);
    cout << "The area of the circle is: " << area << endl;

    return 0;
}

