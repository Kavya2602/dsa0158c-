#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num, result;

    cout << "Enter a number: ";
    cin >> num;

    if (num >= 0) 
	{
        result = cbrt(num); 
       cout << "The cube root of " << num << " is " << result << endl;
    } 
	else 
	{
       cout << "Error: Negative numbers don't have real cube roots." << endl;
    }

    return 0;
}
