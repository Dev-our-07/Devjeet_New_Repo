//WAP maximum element of each row in a @D array using pointers.
#include <iostream>
using namespace std;

int main() {
    int m,n;
    cout << "Enter number of rows and columns: ";
    cin >> m>>n ;

    int matrix[m][n];
    cout << "Enter elements of the matrix: " << endl;
    for (int n = 0; n < m; n++) {
        for (int m = 0; m < n; m++) {
            cin >> matrix[n][m];
        }
    }
cout<<"Matrix entered: ";
 for (int n = 0; n < m; n++) {
        for (int m = 0; m < n; m++) {
           cout<< matrix[n][m]<<"";
        }
        cout<<endl;
    }

    for(int i=0; i<m; i++){
        int* row = matrix[i];
        int maxElement = *row;
        for(int j=1; j<n; j++){
            if(*(row + j) > maxElement){
                maxElement = *(row + j);
            }
        }
        cout << "Maximum element in row " << i + 1 << " is: " << maxElement << endl;
    }
    return 0;
}