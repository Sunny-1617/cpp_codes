#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    cout << "Enter rows and columns for Matrix 1: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for Matrix 2: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Error: Column of Matrix 1 must equal row of Matrix 2!";
        return 0;
    }

    int A[r1][c1], B[r2][c2], C[r1][c2];

    // Input Matrix 1
    cout << "Enter elements of Matrix 1:\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> *(*(A + i) + j);

    // Input Matrix 2
    cout << "Enter elements of Matrix 2:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> *(*(B + i) + j);

    // Multiplication using Pointers
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            *(*(C + i) + j) = 0; // Initialize result element to 0
            for (int k = 0; k < c1; k++) {
                *(*(C + i) + j) += (*(*(A + i) + k)) * (*(*(B + k) + j));
            }
        }
    }

    // Display Result
    cout << "\nResultant Matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << *(*(C + i) + j) << " ";
        }
        cout << endl;
    }

    return 0;
}
