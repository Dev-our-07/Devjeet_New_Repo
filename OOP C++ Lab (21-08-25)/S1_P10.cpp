//Pointer to Array vs Array of Pointers 
#include <iostream>
using namespace std;

int main() 
{
    // Pointer to an array of integers
    int arr1[5] = {1, 2, 3, 4, 5};
    int (*ptr1)[5] = &arr1; // ptr1 points to the entire array arr1

    cout << "Pointer to Array:" << endl;
    for (int i = 0; i < 5; ++i) 
    {
        cout << (*ptr1)[i] << " "; // Accessing elements using pointer to array
    }
    cout << endl;

    // Array of pointers to integers
    int *arr2[5];
    for (int i = 0; i < 5; ++i) 
    {
        arr2[i] = new int(i + 1); // Dynamically allocating memory for each element
    }

    cout << "Array of Pointers:" << endl;
    for (int i = 0; i < 5; ++i) 
    {
        cout << *arr2[i] << " "; // Accessing elements using array of pointers
        delete arr2[i]; // Freeing dynamically allocated memory
    }
    cout << endl;

    // Demonstrating the difference
    cout<<"Demonstratiing the difference between pointer to array and array of pointers:" << endl;
    cout << "Size of pointer to array: " << sizeof(ptr1) << " bytes" << endl;
    cout << "Size of array of pointers: " << sizeof(arr2) << " bytes" << endl;  

    return 0;
}
