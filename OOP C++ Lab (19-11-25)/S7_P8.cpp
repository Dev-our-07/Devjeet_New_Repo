/*Objective: Read one integer as string. If it is negative (starts with -), throw 
std::invalid_argument and catch to print Negative not allowed. Otherwise print the 
number. (You may use stoi inside try-catch.)*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a number: ";
    cin>> str;

    try{
        int num= stoi(str);
        if(num<0){
            throw invalid_argument("Negative not allowed");
        }
        else{
            cout<<num;
        }
    }
    catch(invalid_argument &e){
        cout<< "Negative not allowed"<<endl;
    }

    return 0;
}