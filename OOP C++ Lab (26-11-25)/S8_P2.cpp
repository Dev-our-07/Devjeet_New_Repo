/*Create a C++ program that reads a text file and counts the total number of characters, 
words, and lines present in it. Use file-handling functions and string processing 
techniques. Display all three counts separately at the end.*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream myFile("P1.txt");
    if (myFile.is_open()) 
    {
         string line;
        int charCount = 0;
        int wordCount = 0;
        int lineCount = 0;

        while(myFile.get(ch)) 
        {
            charCount++;
        
        }
         myFile.clear();
        myFile.seekg(0, ios:beg);

        while()

        myFile.close();
    }
    else{
    cout << "Error: File could not be opened." << endl;
    }

    cout << "Total Characters: " << charCount << endl;
    cout << "Total Words: " << wordCount << endl;
    cout << "Total Lines: " << lineCount << endl;

   
    
    return 0;
        }