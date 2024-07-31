#include <iostream>
using namespace std;

void deleteElement(int arr[], int& size, int position) {
    if (position < 0 || position >= size) {
        cout << "Invalid position!" << endl;
        return;
    }

    // Shift elements to the left to fill the gap
    for (int i = position; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    --size;
}

int main() {
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int position;
    cout << "Enter the position of the element to delete (0-based index): ";
    cin >> position;

    // Delete the element
    deleteElement(arr, size, position);

    // Print the updated array
    cout << "Array after deletion:\n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free allocated memory
    delete[] arr;

    return 0;
}

