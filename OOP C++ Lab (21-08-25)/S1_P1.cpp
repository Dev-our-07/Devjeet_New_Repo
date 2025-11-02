// Program 1: Print Address and Value of a variable using a pointer
#include <iostream>
using namespace std;

int main()
{
   int *p; // Declared pointer
   int var = 10; //Integer variable
   
   p = &var; // Pointer p now holds the address of variable var
   cout << "Value of variable: " << var << endl;     // Value of a
   cout << "Address of variable var: " << p << endl; // Address of a
   return 0;
}