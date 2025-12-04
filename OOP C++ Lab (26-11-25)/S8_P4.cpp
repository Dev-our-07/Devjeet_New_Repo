/*Develop a program that opens an existing text file in append mode (ios::app). Ask the 
user to enter multiple lines of text until they enter "STOP". Append each line to the file 
without overwriting the existing data. After completion, display a message indicating that 
the data has been appended successfully.*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream myFile("P1.txt" , ios::app);        //append
    if (myFile.is_open()){
        cout<<"File opened. Add new data: ";
        string line;
        cout<<"Enter Your data: ";
        while (line!= "STOP"){
            getline(myFile, line);
            cout << line << endl;
        }
        cout<<"Data append successfully.";

        myFile.close();
    }

    else{
        
    }

    return 0;
}