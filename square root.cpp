#include <iostream>
#include <cmath> 
int main() {
    double number, result;
    
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number < 0)
   {
        std::cout << "Error: Cannot compute the square root of a negative number." << std::endl;
    } 
	else
	
   {
        result = sqrt(number);
        std::cout << "The square root of " << number << " is " << result << std::endl;
    }

    return 0;
}
