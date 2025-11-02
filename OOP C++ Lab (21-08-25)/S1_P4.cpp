//Sum of two numbers using pointers
#include<iostream>
using namespace std;

int Sum(int *p, int *q)
{
    int s= *p + *q; //Must add the values at their indicated vars
    return s;
}

int main()
{
    int a= 5, b=4;  //Declaring variables
    int *p = &a, *q= &b; //Declaring pointers

    int S= Sum(p , q); // function call
    cout<<"Sum of "<<a<<" and "<<b<<" using pointers is: "<<S;
    return 0;
}