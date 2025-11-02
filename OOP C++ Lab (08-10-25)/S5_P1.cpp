/*1. Student Result Management System 
Concepts: Array of objects, data input/output, aggregation logic 
Problem: 
Create a class Student with members: rollNo, name, marks[5], and total. 
• Use an array of Student objects to store data of n students. 
• Calculate and display the total marks and the student with the highest total. 
Hint: 
Loop through array, call member functions for input and calculation.*/

#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;
    int marks[5];
    int total;

    public:
    Student()   //Default Constructor
    {
        rollNo = 0;
        name = "";
        for (int i = 0; i < 5; i++)
        {
            marks[i] = 0;
        }
        total = 0;
    }


    void inputData(Student arr[], int n)
    {  
        
        for (int i = 0; i < n; i++){
            cout << "Enter Roll No and Name:"; 
            cin>>arr[i].rollNo>> arr[i].name ;
           
            total = 0;
            for (int i = 0; i < 5; i++)
            {
                cout << "Enter marks for subject " << (i + 1) << ": ";
                cin >> marks[i];
                total += marks[i];
            }
        }
    }

    void checkHighest(Student arr[], int i)
    {
       // i= sizeof(arr)/sizeof(arr[0]);
        int highest = arr[0].total;
        int index = 0;
        for (int j = 1; j < i; j++)
        {
            if (arr[j].total > highest)
            {
                highest = arr[j].total;
                index = j;
            }
        }
        cout << "Student with highest total marks: " << arr[index].name << " with total " << highest << endl;
    }   
  
};

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)     //Array of objects
    {
        arr[i].inputData(arr, n);
    }

    arr[0].checkHighest(arr, n);
    return 0;
}