#include <iostream>
using namespace std;

int main() {
    int a = 100;

    int& refA = a;  // refA is a reference to variable a

    cout << "Original value of a: " << a << endl;
    cout << "Value via refA: " << refA << endl;

    // Modify using reference
    refA = 30;

    cout << "\nAfter modifying refA:" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value via refA: " << refA << endl;

    return 0;
}
