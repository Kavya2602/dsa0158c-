#include <iostream>

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    int sum = 0;
    int i = 1;
    do {
        sum += i;
        i++;
    } while (i <= n);

    std::cout << "Sum of first " << n << " natural numbers: " << sum << std::endl;

    return 0;
}

