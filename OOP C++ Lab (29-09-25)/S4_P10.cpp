/* Combination Example 
Create a class Employee (id, salary). Add two functions: 
• A member function updateSalary(Employee &e) that copies salary from another 
employee. 
• A non-member function swap(Employee *e1, Employee *e2) that swaps salaries 
of two employees using pointers. */
#include <iostream>
using namespace std;

class Employee{
    public:
    int id;
    float salary;
    Employee()
    {
        id=0;
        salary=0;
    }

    Employee(int i, float s)
    {
        id= i;
        salary= s;
    }

    void updateSalary(Employee &e)
    {
        salary = e.salary; 
    }

    friend void swap(Employee *e1, Employee *e2);
};

void swap(Employee *e1, Employee *e2)
{
    float temp = e1->salary;
    e1->salary = e2->salary;
    e2->salary = temp;
}
int main()
{
    Employee e1(1, 50000), e2(2, 60000);
    cout<<"Before updating, Employee 1 salary: "<<e1.salary<<endl;
    e1.updateSalary(e2);
    cout<<"After updating, Employee 1 salary: "<<e1.salary<<endl;

    cout<<"Before swapping, Employee 1 salary: "<<e1.salary<<", Employee 2 salary: "<<e2.salary<<endl;
    swap(&e1, &e2);
    cout<<"After swapping, Employee 1 salary: "<<e1.salary<<", Employee 2 salary: "<<e2.salary<<endl;

    return 0;
}
