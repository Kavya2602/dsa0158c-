#include <iostream>
#include <climits>  // For INT_MIN

int findSecondLargest(const int* array, size_t size) {
    if (size < 2) {
        std::cerr << "Array should have at least two elements." << std::endl;
        return INT_MIN;  // Return INT_MIN to indicate an error.
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (size_t i = 0; i < size; ++i) {
        if (array[i] > largest) {
            secondLargest = largest;
            largest = array[i];
        } else if (array[i] > secondLargest && array[i] != largest) {
            secondLargest = array[i];
        }
    }

    if (secondLargest == INT_MIN) {
        std::cerr << "No second largest element found." << std::endl;
        return INT_MIN;  // Return INT_MIN to indicate an error.
    }

    return secondLargest;
}

int main() {
    int n;

    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    if (n < 2) {
        std::cerr << "Array must contain at least two elements." << std::endl;
        return 1;
    }

    int* array = new int[n];

    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];
    }

    int secondLargest = findSecondLargest(array, n);

    if (secondLargest != INT_MIN) {
        std::cout << "The second largest element is: " << secondLargest << std::endl;
    }

    delete[] array;
    return 0;
}

