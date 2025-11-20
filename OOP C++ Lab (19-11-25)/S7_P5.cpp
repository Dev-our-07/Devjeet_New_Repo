/*Objective: Implement Box<T> but test with T = string. Class stores a value, set and 
get. Read one string, store it, then print from get(). 
Input: one word (no spaces). 
Output: the same word. 
Example: 
Input: Hello → Output: Hello*/

#include <iostream>
#include <string.h>
using namespace std;

template<typename T>
class Box{
    private:
    string word;

    public:
    void setvalue(T st){
        word= st;
    }


};

int main()
{
    cout<<"Enter value ";
}