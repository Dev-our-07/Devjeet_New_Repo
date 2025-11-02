//WAP to reverse an array of size n using pointers 
//(do not use indexing like arr[i]). 
#include <iostream>
using namespace std;

void ReverseArray(int* arr, int n)
{
    for (int i = n - 1; i >= 0; i--) {
        cout << *(arr + i) << " ";
    }
}

int main() 
{   int n, i;
    cout << "Enter the number of elements: ";
    cin >> n;
    int* arr = new int[n]; //Declaration using pointer arithematic
    cout << "Enter " << n << " integers: ";
    for (i = 0; i < n; i++) 
    {
        cin >> *(arr + i);
    }

    //Reversing Array;

    cout << "Reversed array: ";
    ReverseArray(arr, n);
    /* Logic used
     for (int i = n - 1; i >= 0; i--) {
        cout << *(arr + i) << " ";
    }*/
    cout << endl;
    return 0;
}