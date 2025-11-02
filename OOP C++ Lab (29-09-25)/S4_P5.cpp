/*Define a class Student (name, marks). Write a non-member function 
compare(const Student &s1, const Student &s2) that takes objects by reference 
and returns the one with higher marks by value. */
#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int marks;
    Student(){        // Default constructor
        name = " ";
        marks = 0;
    }
};

Student compare(const Student &s1, const Student &s2)
{
    if(s1.marks > s2.marks)
        return s1;
    else
        return s2;
}

int main()
{
    Student s1, s2, s3;
    cout<<"Enter name and marks of student 1: ";
    cin>>s1.name>>s1.marks;
    cout<<"Enter name and marks of student 2: ";
    cin>>s2.name>>s2.marks;
    s3 = compare(s1, s2);
    cout<<"Student with higher marks is: "<<s3.name<<" with marks "<<s3.marks;
    return 0;
}