/*Create a class Circle with data member radius. 
• Write a default constructor that sets radius to 1. 
• Write a parameterized constructor that accepts radius from user. 
• Add a function area() to calculate and display the area. 
• Demonstrate both constructors in main().*/
#include <iostream>
using namespace std;

class Circle{
    int radius;

    public:
    Circle()
    {
        radius= 1;
    }

    Circle(int r)
    {   
        radius= r;
    }

   void area()
    {
        int ar= radius*radius;
        cout<<"Area is: "<<ar<<endl;
    }
};

int main(){
    int rd;
    Circle C1;      // Demonstrate default constructor
    cout << "Enter radius for C2: ";    // Demonstrate parameterized constructor
    cin >> rd;
    Circle C2(rd);
    // Display area for both circles
    C1.area();
    C2.area();

    return 0;
}