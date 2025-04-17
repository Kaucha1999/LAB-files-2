#include <iostream>
#include <cmath>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int multiply(int a, double b, bool flag) {
    double result = a * b;

    if (flag) {
        if (result >= 0)
            return ceil(result);
        else
            return floor(result);
    } else {
        return result;
    }
}

int main() {
    int result1 = multiply(5, 4);
    cout << "The product of 5 * 4 is: " << result1 << endl;

    double result2 = multiply(2.5, 4.0);
    cout << "The product of 2.5 and 4.0 is: " << result2 << endl;

    int result3 = multiply(3, 4.5, false);
    cout << "Multiply int and double (3 * 4.5), flag = false: " << result3 << endl;

    int result4 = multiply(3, 4.5, true);
    cout << "Multiply int and double (3 * 4.5), flag = true: " << result4 << endl;

    return 0;
}
