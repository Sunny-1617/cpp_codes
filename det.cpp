
#include <iostream>
#include <cmath>
using namespace std;
int determinant(int matrix[10][10], int n) {
    int det = 0;
    int submatrix[10][10];
    if (n == 1) {
        return matrix[0][0];
    }
    if (n == 2) {
        return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
    }
    for (int x = 0; x < n; x++) {
        int subi = 0;
        for (int i = 1; i < n; i++) {
            int subj = 0; 
            for (int j = 0; j < n; j++) {
                if (j == x) continue;
                submatrix[subi][subj] = matrix[i][j];
                subj++;
            }
            subi++;
        }
        det = det + (pow(-1, x) * matrix[0][x] * determinant(submatrix, n - 1));
    }
    return det;
}

int main() {
    int n, i, j;
    int matrix[10][10];

    cout << "Enter the size of the matrix (max 10): ";
    cin >> n;

    if (n > 10 || n < 1) {
        cout << "Invalid matrix size. Please enter a size between 1 and 10." << endl;
        return 1;
    }

    cout << "Enter the elements of the matrix:" << endl;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> matrix[i][j];

    cout << "The determinant of the matrix is: " << determinant(matrix, n) << endl;

    return 0;
}
