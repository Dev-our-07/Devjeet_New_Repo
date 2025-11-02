//WAP void reverse(int *arr, int n) that reverses the elements of an array using pointers.
#include <iostream>
using namespace std;

int arr [7]={5, 8, 3, 3, 0, 9, 2};  //Declared array
void reverse(int *n, int size) 
{
    for (int i = 0; i < size; i++) 
    {
        cout << *n << "\t";
        n--;        //Updation of the pointer
    }
}

int main() 
{
    int arr[7] = {5, 8, 3, 3, 0, 9, 2};
    int* n = &arr[6]; // Point to the last element
    reverse(n, 7); // Function call
    return 0;
}
