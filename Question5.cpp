#include <iostream>
using namespace std;

int main() {
    int arr1[5] = {1, 4, 7, 10, 15};
    int arr2[5];

    int* ptr = arr1 + 4;  

    for (int i = 0; i < 5; i++) {
        arr2[i] = *ptr;
        ptr--; // move backward
    }

    cout << "Reversed array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }

    cout << endl;

    return 0;
}
