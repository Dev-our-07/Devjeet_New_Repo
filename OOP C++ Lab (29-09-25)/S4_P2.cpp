/*Create a class Rectangle (length, breadth). Write a non-member function 
scale(Rectangle &r) that doubles the dimensions of the rectangle. Pass by 
reference */

#include <iostream>
using namespace std;

class Rectangle{
    public:
    int length, breadth;
    Rectangle(){        // Default constructor
        length = 0;
        breadth = 0;
    }
};
void scale(Rectangle &r) 
{ 
    r.length *= 2; 
    r.breadth *= 2; 
}
int main(){
    Rectangle r1;
    cout<<"Enter length and breadth of rectangle: ";
    cin>>r1.length>>r1.breadth;
    cout<<"Original point coordinates are: (" << r1.length << ", " << r1.breadth << ")" << endl;
    scale(r1);
    cout<<"Scaled rectangle dimensions are: (" << r1.length << ", " << r1.breadth << ")" << endl;
    return 0;
}