/*Create a class Car with data members brand and price. 
• Define a copy constructor to initialize one object from another. 
• Demonstrate copy constructor in main().*/
#include <iostream>
#include <string.h>
using namespace std;

class Car{
    string brand;
    int price;

    public:
    // Default constructor
    Car(){
        brand="None";
        price= 0;
    }

    void inputData(string b, int p)
    {   
        brand=b;
        price= p;
    }

    void Display()
    {
        cout<<"Brand: "<< brand;
        cout<<"\tPrice: "<<price;
    }
    // Copy constructor
    Car( Car &C)
    {
        brand = C.brand;
        price = C.price;
    }
};

int main()
{   Car C1;
    string br;
    int pr;
    cin>>br;
    cin>>pr;
    C1.inputData(br,pr);
    C1.Display();
    Car C2 = C1; // Use copy constructor
    cout << endl << "Copied Car details:" << endl;
    return 0;
}   
    
