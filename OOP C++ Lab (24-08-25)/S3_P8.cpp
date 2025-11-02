/*Create a class Complex with two data members real and imag. 
• Define a function add(Complex c) that adds the current object with object c 
and returns the result. 
• In main(), create two complex numbers and add them. */
#include <iostream>
using namespace std;

class Complex
{   private:
    int real, imag;

    public:
    int add(Complex c)
    {   
        int r = this->real + c.real;
        int i = this->imag + c.imag;
        cout<<"Sum of Complex Numbers: "<<r<<" + i"<<i;
        return 0;
        
    }
    void InComplex(int r, int i)
    {   real=r;
        imag=i;
    }
};

int main()
{   Complex C1, C2;
    C1.InComplex(5,7);
    C2.InComplex(3,4);
    C1.add(C2);
    

    return 0;
}