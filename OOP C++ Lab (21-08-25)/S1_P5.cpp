//Maximum of three using pointers
#include <iostream>
using namespace std;

 int max(int *a, int *b, int *c)
     {
        if (*a>*b && *a>*c)   //Checking for a
        {
            return *a ;
        }   
        else 
        {  
             if (*b>*a && *b>*c)    //Checking for b
                
            {
              return *b;
            }
                else          //Returning c
                {
                   return *c;
                }
                
        }
    }
 int main()
 {
    int x=12, y=39, z= 10;    //Initialising values
    int *a= &x, *b= &y, *c= &z; //Appointing pointers
    int g= max(a, b, c);      //Function call
    cout<<"Greatest of the three is: "<<g;
    return 0;
 }