#include <iostream>
using namespace std;

int incr5 (int a)
{
    return a+5;
}

int main()
{   //Call by value
   int x,y;
   cout<<"Enter a number: ";
   cin>>x;
   y= incr5(x);
   cout<<"\nThe increased value of "<<x<<" is "<<y;
   
   //Call by refence
   int *m; //pointer
   int n;
   m=&n;
   cout<<"\nEnter a number: ";
   cin>> n;
   *m= incr5(n);
   cout<<"\nThe increased value of "<<*m<<" is "<<n;
   
   return 0;
}
