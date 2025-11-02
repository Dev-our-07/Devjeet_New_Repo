//WAP  to dynamically allocate memory for an integer array of size n, put elements, and find their average using pointers.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // Dynamically allocate memory for the array
    int* arr = new int[n];

    // Input elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }

    // Calculate average
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    double average = static_cast<double>(sum) / n;      //static cast to convert int to double. It avoids data loss.
/*Static_cast is a C++ operator that performs explicit type conversion. 
It is used to convert one data type to another in a safe and controlled manner.*/
    // Output the average
    cout << "The average is: " << average << endl;

    return 0;
}