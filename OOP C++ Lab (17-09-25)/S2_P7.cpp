//WAP Input elements of a 2 x 2 x 2 3D array and find the sum using pointer arithematics.
#include <iostream>
using namespace std;

int main() {
    int matrix[2][2][2];
    cout << "Enter elements of the 3D matrix (2x2x2): " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cin >> matrix[i][j][k];
            }
        }
    }

    int sum = 0;
    //Basic Logic:
    /*for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                sum += *(*(*(matrix + i) + j) + k);
            }
        }
    }*/

   cout << "The 3D matrix (2x2x2) so formed is: " << endl;
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
        for (int k = 0; k < 2; k++) {
            cout << matrix[i][j][k] << " ";
        }
        cout << endl;
    }
    cout << "\t" << endl; 
}

    //Pointer Arithematic Logic:
    for(int (*p)[2][2] = matrix; p < matrix + 2; p++) {
        for(int (*q)[2] = *p; q < *p + 2; q++) {
            for(int *r = *q; r < *q + 2; r++) {
                sum += *r;
            }
        }
    }

    cout << "Sum of all elements in the 3D matrix: " << sum << endl;
    return 0;
}