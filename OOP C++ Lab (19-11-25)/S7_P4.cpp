/*Objective: Implement scaleVector<T>(vector<T>& v, T factor) that multiplies every 
element by factor. Read vector, scale, print result. 
Input: type n, then n elements, then factor. 
Output: scaled elements space-separated.
Example: 
Input: 
int 3 
1 2 3 
2 
Output: 
2 4 6 */
#include <iostream>
using namespace std;

template <typename T>
void scaleVector(T v[], int n, T factor) {
    for (int i = 0; i < n; i++) {
        v[i] *= factor;
    }

    cout << "Scaled elements: ";
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    string type;
    int n;
    cout<<"Enter data type and number of elements: ";
    cin >> type >> n;
    cout<<endl<<"Now enter the elements: ";

    if (type == "int") {            //for int
        int* arr = new int[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int factor;
        cout<<"Enter scaling factor: ";
        cin >> factor;
        scaleVector(arr, n, factor);
    } 

    else if (type == "double") {        //for double
        double* arr = new double[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        double factor;
        cout<<"Enter scaling factor: ";
        cin >> factor;
        scaleVector(arr, n, factor);
    }

    return 0;
}