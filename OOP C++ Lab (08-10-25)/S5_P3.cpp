/*3. Library Book Management 
Concepts: Array of objects, searching, string handling 
Problem: 
Create a class Book with members: bookID, title, author, and price. 
• Read details for n books into an array. 
• Implement a function to search for a book by author name. 
• Display all books written by that author. 
Extension: 
Allow partial match search using string::find(). */
#include <iostream>
#include <string.h>
using namespace std;

class Book{
    int bookID;
    string title;
    string author;
    float price;

    public:
    Book()      //default constructor
    {
        bookID=0;
        title="";
        author="";
        price=0.0;
    }

    void inputData()
    {
        cout<<"Enter Book ID, Title, Author and Price: ";
        cin>>bookID>>title>>author>>price;
    }    

    void displayData()
    {
        cout<<"Book ID: "<<bookID<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<endl;
    }    

    string getAuthor()
    {
        return author;
    }


};

int main()
{
    int n;
    cout<<"Enter number of books: ";
    cin>>n;

    Book arr[n];   //array of objects

    for(int i=0; i<n; i++)
    {
        arr[i].inputData();
    }

    string searchAuthor;
    cout<<"Enter author name to search: ";
    cin>>searchAuthor;

    cout<<"Books by author "<<searchAuthor<<" are: "<<endl;
    for(int i=0; i<n; i++)
    {
        if(arr[i].getAuthor() == searchAuthor)   //exact match
        {
            arr[i].displayData();
        }
    }

    return 0;
}