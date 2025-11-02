//WAP to Input two 2D matrices (size m x n) and find their sum using pointers. 
#include <iostream>
using namespace std;

void Sum(int* mat1, int* mat2, int* sum, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            *(sum + i * n + j) = *(mat1 + i * n + j) + *(mat2 + i * n + j);
        }
    }
    cout << "Sum of the two matrices is: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << *(sum + i * n + j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int m, n;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;

    int matrix1[m][n], matrix2[m][n];
    cout << "Enter values for matrix 1: ";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter values for matrix 2: ";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix2[i][j];
        }
    }

    int sum[m][n];
    Sum((int*)matrix1, (int*)matrix2, (int*)sum, m, n);

    
    return 0;
}