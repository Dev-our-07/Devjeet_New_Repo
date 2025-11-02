/*Create a class Rectangle with data members length and width. 
• Define a member function area() outside the class (using scope resolution 
operator). 
• In main(), create an object and display its area.*/

#include <iostream>
#include <string.h>
using namespace std;

class Rectangle{
    public:
    int length;
    int width;
    int area(int l, int w);
};

// Defining area() outside the class using scope resolution operator
int Rectangle::area(int l, int w)
{
    length = l;
    width = w;
    int a = length * width;
    return a;
}


int main()
{   Rectangle R1;
    int r;
    int lem= 8;
    int wid= 7;
    r= R1.area(lem, wid);
    cout<<r;
    return 0;

}