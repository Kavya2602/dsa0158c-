#include<iostream>
using namespace std;

class Counter {
public:
    static int count; // static field to store the count

    Counter() {
        count++; // increment the count every time an object is created
    }

    static int getCount() {
        return count;
    }
};

int Counter::count = 0; // initialize the static field

int main() {
    Counter obj1;
    Counter obj2;
    Counter obj3;

    cout << "Number of objects created: " << Counter::getCount() << endl;

    return 0;
}
