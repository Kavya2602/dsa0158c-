#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int originalNum = num;
    int sum = 0;
    
    // Calculate the sum of factorials of the digits
    while (num > 0) {
        int digit = num % 10;
        
        // Calculate factorial of the digit
        int factorial = 1;
        for (int i = 1; i <= digit; ++i) {
            factorial *= i;
        }

        // Add the factorial to the sum
        sum += factorial;
      
        num /= 10;
    }

    if (sum == originalNum) {
        std::cout << originalNum << " is a strong number.\n";
    } else {
        std::cout << originalNum << " is not a strong number.\n";
    }

    return 0;
}

