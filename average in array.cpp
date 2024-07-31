#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 1;
    }

    int* arr = new int[size];

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    // Calculate the sum of all elements
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    // Calculate the average
    double average = static_cast<double>(sum) / size;

    // Print the average
    cout << "Average of all elements: " << average << endl;

    // Free allocated memory
    delete[] arr;

    return 0;
}

