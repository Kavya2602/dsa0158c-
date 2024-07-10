#include <iostream>
using namespace std;
int main() 
{
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
	 {
        cin >> arr[i];
    }

    int i = 0;
    while (i < size)
	 {
        if (arr[i] != i)
		 {
            cout << "The smallest missing element is " << i << endl;
            return 0;
        }
        i++;
    }
    cout << "No element is missing in the range 0 to " << size - 1 << endl;
    return 0;
}

