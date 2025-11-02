/*Call by Value (Member Function) 
Create a class Box (length, width, height). Add a member function compare(Box 
b) that compares the calling object with b (passed by value) and prints which is 
larger in volume. */
#include <iostream>
using namespace std;

class Box
{   public:
    int length, width, height;
    int vol;
    Box()
    {   length= 0;
        width= 0;
        height= 0;
        vol= 0;
    }

    void calculateVolume() {
        vol = length * width * height;
    }

    void compare(Box b)
    {
        if (vol > b.vol)
        {
            cout << "Volume of Box A: " << vol << " is biggest";
        }
        else if (vol < b.vol)
        {
            cout << "Volume of Box B: " << b.vol << " is biggest";
        }
        else
        {
            cout << "Both boxes have equal volume: " << vol;
        }
    }
};

int main()
{   Box b1, b2;
    cout<<"Enter length, height and width of the box A: ";
    cin>> b1.length>> b1.height>> b1.width;
    cout<<"Enter length, height and width of the box B: ";
    cin>> b2.length>> b2.height>> b2.width;
    b1.calculateVolume();
    b2.calculateVolume();
    b1.compare(b2);
    return 0;
}