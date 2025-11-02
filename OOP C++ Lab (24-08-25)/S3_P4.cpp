/*Create a class Employee with data members id and salary. 
• Write a parameterized constructor to initialize data members. 
• Create two objects and display their details. */

#include <iostream>
#include <string.h>
using namespace std;

class Employee{
    int id;
    int salary;

    public:
    void inputData(int I, int S)
    {
        id= I;
        salary= S;
    }

    void Display()
    {
        cout<<"Id: "<<id<<"\t";
        cout<<"Salary: "<<salary<<endl;
    }
};

int main(){
    Employee E1, E2;
    int sal, id;
    E1.inputData(101, 50000);
    E2.inputData(102, 60000);
    E1.Display();
    E2.Display();

    return 0;
}