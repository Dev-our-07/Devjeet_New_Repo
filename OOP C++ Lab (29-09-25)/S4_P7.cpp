/*Call by Reference (Member Function) 
Create a class Time (hours, minutes). Add a member function addTime(Time &t) 
that adds t to the calling object (passed by reference). */
#include <iostream>
using namespace std;

class Time{
    public:
    int hours, minutes;
    Time()
    {
        hours=0;
        minutes=0;
    }

    Time(int h, int min)
    {
        hours= h;
        minutes= min;
    }

    Time addTime(Time &t1)
    {
        Time t;
        t. hours= t1.hours; 
        t.minutes = t1.minutes; 
        return t;
    }
};

int main()
{
    Time t2;
    Time T( 3 , 25 );
    t2=T.addTime( T );
    cout<<"Time is: " << t2.hours<<": "<<t2.minutes;
    return 0;
}
