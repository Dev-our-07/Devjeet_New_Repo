/*Create a class FileHandler with a constructor that prints "File opened" and a destructor 
that prints "File closed". 
• Create an object in main() and observe the order of constructor and destructor 
calls.*/
#include <iostream>
using namespace std;

class FileHandler
{
    public:
    FileHandler()
    {
        cout<<"File Opened";
    }
    ~FileHandler()
    {
        cout<<"\nFile Closed";
    }
};

int main()
{
    FileHandler F1;
    return 0;
}