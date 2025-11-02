//Swapping two numbers using functions
#include <iostream>
using namespace std;

void Rswap(int &a, int &b) //Call by reference
{   int temp = a;
    a = b;
    b = temp;
}

int Vswap(int *a, int *b) //Call by value (pointers)
{   int temp = *a;
    *a = *b;
    *b = temp;
    return 0; // Return type is int, but not used here (req for cbv)
}

int main()
{   //Part 1: Swapping two numbers using call by reference
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    Rswap(x, y);  //Call by reference to swap the values
    cout << "After swapping: x = " << x << ", y = " << y << endl;
    
    //Part 2: Swapping two numbers using pointers
    int a, b;
    cout << "Enter two numbers to swap using pointers: ";
    cin >> a >> b;  
    cout << "Before swapping using pointers: a = " << a << ", b = " << b << endl;
    Vswap(&a, &b);  //Call by value (pointer) to swap the values
    cout << "After swapping using pointers: a = " << a << ", b = " << b << endl;

    cout<<"Difference observed: "<<endl;
    cout<< "Value of (Rswap): x = " << x << ", y = " << y << endl;
    cout << "Value of (Vswap): a = " << a << ", b = " << b << endl;
    return 0;
}
