/*Create a class Time with data members hours and minutes. 
• Write a function addTime(Time t) that adds two time objects and returns a new 
object. 
• Ensure minutes are properly converted into hours if they exceed 60.*/
#include <iostream>
using namespace std;

class Time
{   public:
    int hours, minutes;
    
    //Default Constructor
    Time()
    {   hours=00;
        minutes=00;
    }
    //Parameterized Constructor
    void InTime(int hr, int min)
    {   hours=hr;
        minutes=min;
    }
    Time addTime(Time t)
    {   Time temp;
        temp.minutes = (this->minutes + t.minutes) % 60;
        temp.hours = (this->hours + t.hours) + (this->minutes + t.minutes) / 60;
        return temp;
    }

};

int main(){
    Time T1, T2, T3;
    T1.InTime(15,30);
    T2.InTime(10,45);    
    T3 = T1.addTime(T2);
    cout<<"Total Time: "<<T3.hours<<" hours and "<<T3.minutes<<" minutes.";
    return 0;
}