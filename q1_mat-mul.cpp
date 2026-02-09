#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cout << "Enter rows and columns for Matrix 1: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for Matrix 2: ";
    cin >> r2 >> c2;

    // Validation: Columns of Matrix 1 must equal Rows of Matrix 2
    if (c1 != r2) {
        cout << "Invalid Dimensions! Multiplication not possible.";
        return 0;
    }

    int A[r1][c1], B[r2][c2], C[r1][c2];

    cout << "Enter Matrix 1 elements:\n";
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) cin >> A[i][j];
    }

    cout << "Enter Matrix 2 elements:\n";
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) cin >> B[i][j];
    }

    // --- Multiplication Logic (Moved from function to main) ---
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0; // Initialize the cell
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    // ---------------------------------------------------------

    cout << "Product Matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
