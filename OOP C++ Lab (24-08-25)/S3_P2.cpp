/*Create a class Book with data members title, author, and price. Write a program to 
create three objects of Book, initialize them with user input, and display their details. */
#include <iostream>
#include <string>
using namespace std;

class Book
{   private:
    string title;
    string name;
    int price;

    public:
    void input(string t, string n, int p)
    {   cin>>t;
        cin>>n;
        cin>>p;
        title= t;
        name=n;
        price=p;
    }
    void output()
    {
        cout<<"Title: "<<title<<"\t";
        cout<<"Author: "<<name<<"\t";
        cout<<"Price: "<<price<<endl;
    }
};

 int main()
    {   Book B1, B2, B3;
        string a_name, Tit;
        int Pr;
        cout<<"Enter Author Name, Title of the Book and its Price: ";
        B1.input(Tit, a_name, Pr);
        B2.input(Tit, a_name, Pr);
        B3.input(Tit, a_name, Pr);
        B1.output();
        B2.output();
        B3.output();
        return 0;
    }
