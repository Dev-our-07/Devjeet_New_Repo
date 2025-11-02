/*Write a class Complex (real, imag). Create a non-member function add(Complex 
c1, Complex c2) that returns a new object by value. */
#include <iostream>
using namespace std;

class Complex{
    public:
    int real, imag;
    Complex(){        // Default constructor
        real = 0;
        imag = 0;
    }
};

Complex add(Complex c1, Complex c2) 
{   Complex c3;
    c3.real = c1.real + c2.real; 
    c3.imag = c1.imag + c2.imag; 
    return c3;
}

int main(){
    Complex c1, c2, c3;
    cout<<"Enter real and imaginary parts of first complex number: ";
    cin>>c1.real>>c1.imag;
    cout<<"Enter real and imaginary parts of second complex number: ";
    cin>>c2.real>>c2.imag;
    c3 = add(c1, c2);
    cout<<"Sum of complex numbers is: " << c3.real << " + " << c3.imag << "i" << endl;
    return 0;
}