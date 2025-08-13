#include <iostream>
using namespace std;

int main()
{
   int *p; //Declared pointer
   int a=10;
   
   p=&a;
   cout<<a<<endl<<&a<<endl<<p<<endl<<*p<<endl<<&p;

    return 0;
}
