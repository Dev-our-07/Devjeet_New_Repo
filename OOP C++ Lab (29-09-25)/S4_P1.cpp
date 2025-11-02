/* WAP with a class Point (x, y). Create a non-member function 
display(Point p) that takes a Point object by value and prints its coordinates.*/

#include <iostream>
using namespace std;
class Point {
    public:
    int x, y;
    Point(){        // Default constructor
        x = 0;
        y = 0;
    }
};
void display(Point p) 
{ 
    cout << "Point coordinates are: (" << p.x << ", " << p.y << ")" << endl; 
}

int main(){
    Point p1;
    cout<<"Enter coordinates of point (x y): ";
    cin>>p1.x>>p1.y;
    display(p1);
    return 0;
}