#include <iostream>
using namespace std;

int main() {
    int val;
    cout << "Enter a value: "; cin >> val;

    int *ptr = &val;
    int **ptrToPtr = &ptr;

    cout << "Value: " << val << endl;
    cout << "Address via ptr: " << ptr << endl;
    cout << "Value via ptrToPtr: " << **ptrToPtr << endl;
    cout << "Address of ptr: " << ptrToPtr << endl;
    return 0;
}
