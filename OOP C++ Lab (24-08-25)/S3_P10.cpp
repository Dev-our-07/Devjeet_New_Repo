/*Q10. Mini Project – Student Report Card 
Create a class Report with: 
• Data members: name, rollNo, marks[5]. 
• Member functions: 
o input() → to take details from user. 
o display() → to show details. 
o calculateGrade() → to calculate total, percentage, and grade (A, B, C, 
Fail). 
Write a program to create multiple objects of Report and display the report card for 
each student.*/
#include <iostream>
#include <string.h>
using namespace std;

class Report{
    int rollno;
    string name;
    int marks[5];

    public:
    void input(int r, string n, int m[5])
    {
        rollno = r;
        name = n;
        for(int i=0; i<5; i++){
            marks[i] = m[i];
        }
    }
    void display()
    {
        cout<<"Roll no: "<< rollno<<endl;
        cout<<"Name: "<< name<<endl;
        cout<<"Marks: ";
        for(int i=0; i<5; i++){
            cout<<marks[i];
        }
    }

    void calculateGrade()
    {
        int total=0;
        for(int i=0; i<5; i++)
        {
            total += marks[i];
        }
        float percentage = (total/500)*100;

        cout<<"Total: "<< total<<endl;
        cout<<"Percentage: "<< percentage<<endl;


        if(percentage >= 90)
            cout<<"Grade: A"<<endl;

        else 
            if(percentage >= 75)
            cout<<"Grade: B"<<endl;
            else
                if(percentage >= 60)
                cout<<"Grade: C"<<endl;
                else
                cout<<"Grade: Fail"<<endl;
    }
};

int main()
{
    Report R1, R2, R3;
    int r;
    string n;
    int m[5];

    cout<<"Enter Roll no, Name and Marks of 5 subjects: ";
    cin>>r;
    cin>>n;
    for(int i=0; i<5; i++){
        cin>>m[i];
    }

    R1.input(r, n, m);
    R1.display();
    R1.calculateGrade();

    R2.input(r, n, m);
    R2.display();
    R2.calculateGrade();

    R3.input(r, n, m);
    R3.display();
    R3.calculateGrade();



    return 0;
}