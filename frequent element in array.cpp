#include<iostream>
using namespace std;

int findMostFrequent(int arr[], int n) {
    int maxCount = 0;
    int mostFrequent = arr[0];
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }
    return mostFrequent;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int mostFrequent = findMostFrequent(arr, n);
    cout << "The most frequent element is: " << mostFrequent << endl;
    return 0;
}

