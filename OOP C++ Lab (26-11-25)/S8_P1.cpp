/*Write a C++ program that asks the user to enter the name of a text file. The program 
should open the file using ifstream, read its contents line by line using getline(), and 
display the entire content on the screen. If the file does not exist or cannot be opened, 
display an appropriate error message. */

#include<iostream>
#include<fstream>
using namespace std;

int main(){
ifstream myFile("P1");
if(myFile.is_open()){
        string line;
        cout<<"Enter Employee Name: ";
        while (getline(myFile, line)) {
            cout << line << endl;
        }
        myFile.close();
    } 
    else {
        cout << "Error: File could not be opened." << endl;
    }

return 0;
}