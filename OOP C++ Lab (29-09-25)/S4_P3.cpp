/*Create a class Circle (radius). Write a non-member function 
increaseRadius(Circle *c) that increases radius by 5 units. Demonstrate passing 
the object by pointer. */
#include <iostream>
using namespace std;

class Circle{
    public:
    int radius;
    Circle(){        // Default constructor
        radius = 0;
    }
};  

void increaseRadius(Circle *c) 
{ 
    c->radius += 5; 
}

int main(){
    Circle c1;
    void* ptr= &c1;  //pointer declaration
    cout<<"Enter radius of circle: ";
    cin>>c1.radius;
    cout<<"Original radius is: " << c1.radius << endl;
    increaseRadius((Circle*)ptr);    
    cout<<"Increased radius is: " << c1.radius << endl;
    return 0;
}