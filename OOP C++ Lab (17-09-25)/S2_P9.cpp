//Create an array of string pointers (e.g., names of 5 students) and print them using pointer notation.
#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 5;
    string* names[SIZE]; //The astrisk (*) indicates that names is an array of pointers to strings.

    // Input names
    for (int i = 0; i < SIZE; i++) {
        names[i] = new string;
        cout << "Enter name of student " << (i + 1) << ": ";
        cin >> *names[i];
    }

    // Print names using pointer notation
    cout << "Names of students are: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << *(names[i]) << endl;    //Note to self: For pointer printing, use normal syntax just remember to add * and write the array in ()
    }

    // Deallocate memory because my compiler is blind and cannot just execute it
    for (int i = 0; i < SIZE; i++) {
        delete names[i];
    }

    return 0;
}