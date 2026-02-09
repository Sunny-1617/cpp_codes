#include <iostream>
using namespace std;

void multiply(int* A, int* B, int* C, int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            *(C + i * c2 + j) = 0;
            for (int k = 0; k < c1; k++)
                *(C + i * c2 + j) += *(A + i * c1 + k) * *(B + k * c2 + j);
        }
    }
}

int main() {
    int r1, c1, r2, c2;
    cout << "Enter rows and cols for Matrix 1 & 2: ";
    cin >> r1 >> c1 >> r2 >> c2;

    if (c1 != r2) return cout << "Invalid Dimensions!", 0;

    int A[r1][c1], B[r2][c2], C[r1][c2];
    cout << "Enter Matrix 1 elements:\n";
    for(int i=0; i<r1*c1; i++) cin >> *(&A[0][0] + i);
    cout << "Enter Matrix 2 elements:\n";
    for(int i=0; i<r2*c2; i++) cin >> *(&B[0][0] + i);

    multiply(&A[0][0], &B[0][0], &C[0][0], r1, c1, c2);

    cout << "Product Matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) cout << C[i][j] << " ";
        cout << endl;
    }
    return 0;
}
