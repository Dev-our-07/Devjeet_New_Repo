/*2. Employee Salary Slip Generator 

Concepts: Constructor overloading, array of objects, computation logic Problem: 
Define a class Employee with data members id, name, basicSalary, hra, da, and netSalary. 
• Overload constructors: one default and one parameterized. 
• Store records of n employees in an array. 
• Calculate and display netSalary = basicSalary + hra + da. 
• Display employee(s) earning above ₹50,000.*/
#include <iostream>
#include <string>
using namespace std;

class Employee {
    int ID;
    string name;
    int basicSalary, hra, da;
public:
    int netSalary;

    Employee() {
        ID = 0;
        name = "";
        basicSalary = 0;
        netSalary = 0;
        hra = 0;
        da = 0;
    }

    Employee(int id, string n, int bs, int net, int ha, int d) {
        ID = id;
        name = n;
        basicSalary = bs;
        netSalary = net;
        hra = ha;
        da = d;
    }

    void inputData() {
        cout << "Enter the following details: ";
        cout << "Enter Id and Name: ";
        cin >> ID >> name;
        cout << "Salary, HRA and DA: ";
        cin >> basicSalary >> hra >> da;
    }

    void NetSal() {
        netSalary = basicSalary + hra + da;
    }

    void displayData() {
        cout << endl << "Id: " << ID << "\t and Name: " << name;
        cout << endl << "Basic Salary: Rs." << basicSalary << endl;
        cout << "HRA: Rs." << hra << endl << "DA: Rs." << da;
        cout << endl << "The Net Salary is: Rs." << netSalary << endl;
        cout << "-------------8--------------" << endl;
    }
};

int main() {
    int e;
    cout << "Enter number of employees: ";
    cin >> e;

    Employee* arr = new Employee[e];

    for (int i = 0; i < e; i++) {
        arr[i].inputData();
    }

    for (int i = 0; i < e; i++) {
        arr[i].NetSal();
        arr[i].displayData();
    }

    cout << "---------------8-----------------" << endl;
    cout << "Employees earning above 50000 are: " << endl;

    for (int i = 0; i < e; i++) {
        if (arr[i].netSalary > 50000) {
            arr[i].displayData();
        }
    }

    delete[] arr;
    return 0;
}