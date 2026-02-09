#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cout << "Enter size (n): "; cin >> n;

    double a[n][2 * n];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> a[i][j];
        for (int j = n; j < 2 * n; j++) a[i][j] = (i == j - n);
    }
    for (int i = 0; i < n; i++) {
        double pivot = a[i][i];
        if (pivot == 0) { cout << "Inverse doesn't exist"; return 0; }

        for (int j = 0; j < 2 * n; j++) a[i][j] /= pivot; 

        for (int k = 0; k < n; k++) { 
            if (k != i) {
                double factor = a[k][i];
                for (int j = 0; j < 2 * n; j++) a[k][j] -= factor * a[i][j];
            }
        }
    }

    cout << "\nInverse Matrix:\n" << fixed << setprecision(3);
    for (int i = 0; i < n; i++) {
        for (int j = n; j < 2 * n; j++) cout << a[i][j] << "\t";
        cout << endl;
    }

    return 0;
}
