/* two data members: rollNo and name. Write a program to: 
1. Create an object of the class. 
2. Assign values to its data members. 
3. Display the values.*/
#include <iostream>
#include <string.h>
using namespace std;

class Student{
    private:
    int rollno;
    string name;

    public:
    void input(int r, string n){
        rollno = r;
        name = n;
    }

    void output()
    {
        cout<<"Roll no: "<<rollno<<endl;
        cout<<"Name: "<<name;
    }

};

int main(){
    Student S1; //Object created
    S1.input(1,"Dev" );
    S1.output();

    return 0;
}