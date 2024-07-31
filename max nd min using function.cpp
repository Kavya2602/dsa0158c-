#include <iostream>
using namespace std;

// Function to find the minimum element in an array
int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Function to find the maximum element in an array
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int size;

    // Input the number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    // Allocate memory for the array
    int* arr = new int[size];

    // Input the elements of the array
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    // Call the functions to find the minimum and maximum elements
    int minElement = findMin(arr, size);
    int maxElement = findMax(arr, size);

    // Output the minimum and maximum elements
    cout << "Minimum element: " << minElement << endl;
    cout << "Maximum element: " << maxElement << endl;

    // Free allocated memory
    delete[] arr;

    return 0;
}

