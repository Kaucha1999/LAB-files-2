#include <iostream>
using namespace std;

int main() {
    float value1, value2, result;
    char op;

    cout << "Enter first number: ";
    cin >> value1;

    cout << "Enter second number: ";
    cin >> value2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            result = value1 + value2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = value1 - value2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = value1 * value2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (value2 != 0)
                result = value1 / value2;
            else {
                cout << "Error: Division by zero is not allowed!" << endl;
                return 1;
            }
            cout << "Result: " << result << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
