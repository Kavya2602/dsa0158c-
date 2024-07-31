#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

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

    // Print the sum
    cout << "Sum of all elements: " << sum << endl;

    // Free allocated memory
    delete[] arr;

    return 0;
}

