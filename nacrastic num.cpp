#include <iostream>
#include <cmath>

// Function to calculate the number of digits
int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is a narcissistic number
bool isNarcissistic(int num) {
    int originalNum = num;
    int numDigits = countDigits(num);
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }

    return sum == originalNum;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isNarcissistic(num)) {
        std::cout << num << " is a narcissistic number.\n";
    } else {
        std::cout << num << " is not a narcissistic number.\n";
    }

    return 0;
}

