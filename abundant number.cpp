#include <iostream>

// Function to calculate the sum of proper divisors
int sumOfProperDivisors(int num) {
    int sum = 1; // 1 is a proper divisor for all numbers greater than 1
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num <= 1) {
        std::cout << num << " is not an abundant number.\n";
        return 0;
    }

    int sum = sumOfProperDivisors(num);

    if (sum > num) {
        std::cout << num << " is an abundant number.\n";
    } else {
        std::cout << num << " is not an abundant number.\n";
    }

    return 0;
}

