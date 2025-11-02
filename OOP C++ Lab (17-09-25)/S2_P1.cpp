//WAP to input n integers in an array and find the max and min element using a function 
//that takes an array pointer as a parameter. 
#include <iostream>
using namespace std;

void findMax(int* arr, int n)     // function to find maximum element
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)  //Binary Search esque
            max = arr[i];
    }
    cout << "Maximum element: " << max << endl;
}
void findMin(int* arr, int n)     //function to find minimum element
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "Minimum element: " << min << endl;
}

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int* arr = new int[n]; // dynamic memory allocation where int is the array and arr is the pointer
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    findMax(arr, n); // function call to find maximum element
    findMin(arr, n); // function call to find minimum element
    return 0;
}