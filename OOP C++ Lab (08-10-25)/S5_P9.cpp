/*D Complex Number Operations using Array of Objects 
Concepts: Array of objects, operator overloading, aggregation 
Problem: 
Create a Complex class with data members: real and imag. 
• Overload the + and * operators. 
• Create an array of Complex objects. 
• Compute the sum and product of all complex numbers in the array. 
Hint: 
Use loop: 
sum = sum + arr[i]; 
product = product * arr[i]; */
#include <iostream>
using namespace std;
class Complex {
    int real;
    int imag;
public:
    Complex() {
        real = 0;
        imag = 0;
    }
    void inputData() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }
    Complex operator+(const Complex& other) {
        Complex result;
        result.real = real + other.real;
        result.imag = imag + other.imag;
        return result;
    }
    Complex operator*(const Complex& other) {
        Complex result;
        result.real = real * other.real - imag * other.imag;
        result.imag = real * other.imag + imag * other.real;
        return result;
    }
    void displayData() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of complex numbers: ";
    cin >> n;

    Complex* arr = new Complex[n];

    for (int i = 0; i < n; i++) {
        arr[i].inputData();
    }

    Complex sum;
    Complex product;
    product = Complex(); // Initialize product to 1 + 0i

    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
        product = product * arr[i];
    }

    cout << "\nSum of complex numbers: ";
    sum.displayData();

    cout << "Product of complex numbers: ";
    product.displayData();

    delete[] arr;
    return 0;
}