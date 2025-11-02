//Increament using pointer parameter
#include<iostream>
using namespace std;

int a=1;       //Variable declared
void increment(int *p)
{
    *p= a+1; //Should update the value
}
int main()
{
    int *p= &a ; //Pointer declared for variable a
    cout<<"Value at p before increment: "<< *p;
    increment( p ); //Function call
    cout<<"\nValue at p after increment: "<< *p;
    return 0;
}