//WAF  int strLength(char *s) that calculates the length of a using pointer movement. 
#include <iostream>
using namespace std;

int strLength(char *s) 
{
    int l = 0;
    while (*s != '\0') 
    { // Traverse until the null character
        l++;
        s++; // Move to the next character
    }
    return l; // Return the calculated length
}

int main() 
{
    char str[50];
    cout << "Enter a string: ";
    cin.getline(str, 50); // Read a string from input

    int length = strLength(str); // Call the function to calculate length
    cout << "Length of the string is: " << length << endl; // Output the length

    return 0;
}
