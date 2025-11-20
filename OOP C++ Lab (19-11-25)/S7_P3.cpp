/*Objective: Create a class template MinMax<T> that stores two values (minVal, maxVal) 
and has a constructor taking two T values and a print() method to print them as min 
max. 
Input: type and two values. 
Output: min max (use the given values as they are — no need to compute min/max). 
Example: 
Input: double 2.5 7.1 → Output: 2.5 7.1*/

#include <iostream>
#include <string>
using namespace std;
int a,b;

template <typename T>
class MinMax {
private:
    T minVal;
    T maxVal;   

public:
    MinMax(T a, T b)    ///constructor
    {
        minVal = a;
        maxVal = b;        
    }
    
    void print(T a, T b){
        if (a < b)
       {
        minVal= a;
        maxVal= b;
       }
       else{
        minVal= b;
        maxVal= a;
       }

        cout << minVal << " " << maxVal << endl;
    }
};

int main(){
    string type;
    cout<<"Enter data type: ";
    cin>> type;
    cout<<"Now enter two values: ";

    if(type == "int"){
        int a, b;
        cin>> a >> b;
        MinMax<int> obj(a, b);
        obj.print(a, b);
    }
    else if(type == "double"){
        double a, b;
        cin>> a >> b;
        MinMax<double> obj(a, b);
        obj.print(a, b);
    }

    return 0;
}
