//WAP to input 5 integers in an array and print all the elements using pointer arithematics
#include<iostream>
using namespace std;

 int arr[5]={1,2,3,4,5};        //Declared array

 int main()
 {  int* p= &arr[0]; //Base address
    for (int i=0; i<5; i++)
    {
        cout<<*p<<"\t";     //Printing values
        p++ ;       //Updation
    }

    return 0;
 }