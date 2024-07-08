#include<iostream>
using namespace std;

int setNthBit(int num, int n)
 {
    if(n >= 0 && n < sizeof(int)*8)
	 {
        return num | (1 << n);
    } 
	else
	 {
        cout << "Invalid bit position." << endl;
        return num;
    }
}

int main()
 {
    int num, n;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the bit position to set (0-31): ";
    cin >> n;
    num = setNthBit(num, n);
    cout << "The number with the " << n << "th bit set is: " << num << endl;
    return 0;
}

