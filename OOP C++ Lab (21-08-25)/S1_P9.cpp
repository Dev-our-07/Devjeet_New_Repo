//WAP to declare an array of pointers to char, store 5 names, and print them one by one.
#include <iostream>
using namespace std;

int main() {
    const char *names[5] = {"Raj", "Beer", "Dev", "Anu", "Darm"};

    cout << "Names in the array of pointers:" << endl;
    for (int i = 0; i < 5; i++) 
    {
        cout << names[i] << endl; // Print each name
    }
    return 0;
}

