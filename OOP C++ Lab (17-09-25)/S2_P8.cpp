//WAP  to input and print elements of a 3 x 3 x 3 cube using only pointers 
#include <iostream>
using namespace std;

int main() {
    int cube[3][3][3];
    int* p = &cube[0][0][0]; // Pointer to the first element

    cout << "Enter elements of the 3D cube (3x3x3): " << endl;
    for (int i = 0; i < 27; i++) {
        cin >> *(p + i);
    }

    cout << "The 3D cube (3x3x3) so formed is: " << endl;
    int idx = 0; // Index to track position in the 1D representation
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cout << *(p + idx) << " ";
                idx++;
            }
            cout << endl;
        }
        cout << "\t" << endl;
    }

    return 0;
}