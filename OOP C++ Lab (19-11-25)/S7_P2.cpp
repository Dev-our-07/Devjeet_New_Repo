/*Objective: Implement sumArray as a function template that returns sum of n elements 
of a vector. Types allowed: int or double. 
Input: First line: type and n. Second line: n numbers. 
Output: Sum (same type as input). 
Example: 
Input: 
int 3 
1 2 3 
Output: 
6 */

#include <iostream>
using namespace std;

template <typename T>
T sumArray(T arr[], int n) {
    T sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    string type;
    int n;
    cout<<"Enter data type and number of elements: ";
    cin >> type >> n;
    cout<<"Now enter the elements: ";
    if (type == "int") {
        
        int* arr = new int[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        cout << sumArray(arr, n) << endl;
        
    } 
    else if (type == "double") {
        double* arr = new double[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        cout << sumArray(arr, n) << endl;
        
    }

    return 0;
}