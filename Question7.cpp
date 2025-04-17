#include <iostream>
using namespace std;

int main() {
    int x = 100;

    int* p1 = &x;  // p1 points to x
    int* p2 = p1;  // p2 also points to x (shallow copy)

    cout << "Original value of x: " << x << endl;
    cout << "Value via p1: " << *p1 << endl;
    cout << "Value via p2: " << *p2 << endl;

    // Modify value using p2
    *p2 = 200;

    cout << "\nAfter modifying via p2:" << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value via p1: " << *p1 << endl;
    cout << "Value via p2: " << *p2 << endl;

    return 0;
}
