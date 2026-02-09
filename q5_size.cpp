#include <iostream>
#include <iomanip>

using namespace std;

struct XYZ {
    int x;
    double y;
    char z;
};

struct ZYX {
    int x[10];
    float y;
    double z[5];
};

int main() {
    int A1[] = {12, 5, 200};
    float A2[] = {12.2f, 5.0f, 200.0f};
    double C[] = {12.2, 5.0, 200.0};

    
    int matA[3][3] = {{2, 4, 7}, {33, 22, 11}, {0, -1, 1}};
    float matB[2][3] = {{2.1, 4.2, 7}, {21, 5, -2}}; // Note: 2x3 based on input count

    
    cout << "--- (i) Linear Array Sizes (in bytes) ---" << endl;
    cout << "Size of int A:    " << sizeof(A1) << " bytes" << endl;
    cout << "Size of float A:  " << sizeof(A2) << " bytes" << endl;
    cout << "Size of double C: " << sizeof(C) << " bytes" << endl;

    cout << "\n--- (ii) Matrix Sizes (in bytes) ---" << endl;
    cout << "Size of 3x3 int Matrix A:   " << sizeof(matA) << " bytes" << endl;
    cout << "Size of 2x3 float Matrix B: " << sizeof(matB) << " bytes" << endl;

    cout << "\n--- (iii) Structure Sizes (in bytes) ---" << endl;
    cout << "Size of struct XYZ: " << sizeof(XYZ) << " bytes" << endl;
    cout << "Size of struct ZYX: " << sizeof(ZYX) << " bytes" << endl;

    return 0;
}
