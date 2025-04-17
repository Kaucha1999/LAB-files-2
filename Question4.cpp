#include <iostream>
using namespace std;

int main() {
    float number;

    while (true) {
        cout << "Enter a number: ";
        cin >> number;

        if (number < 0) {
            cout << "Negative number entered. Stopping the program." << endl;
            break;
        }

        if (number == 0) {
            cout << "Zero entered. Skipping..." << endl;
            continue;
        }

        float square = number * number;
        cout << "Square of " << number << " is: " << square << endl;
    }

    return 0;
}
