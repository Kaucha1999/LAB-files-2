#include <iostream>
using namespace std;

void swapByValue(float a, float b) {
    float temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue: a = " << a << ", b = " << b << endl;
}

void swapUsingPointers(float* a, float* b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

void swapUsingReferences(float& a, float& b) {
    float temp = a;
    a = b;
    b = temp;
}

int main() {
    float x = 10.5, y = 20.5;

    cout << "Original floats: x = " << x << ", y = " << y << endl;

    swapByValue(x, y);
    cout << "After swapByValue: x = " << x << ", y = " << y << endl;

    swapUsingPointers(&x, &y);
    cout << "After swapUsingPointers: x = " << x << ", y = " << y << endl;

    swapUsingReferences(x, y);
    cout << "After swapUsingReferences: x = " << x << ", y = " << y << endl;

    return 0;
}
