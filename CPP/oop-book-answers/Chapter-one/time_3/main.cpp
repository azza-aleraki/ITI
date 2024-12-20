/*3. Create a class called time that has separate int member data for hours, minutes, and
seconds. One constructor should initialize this data to 0, and another should initialize it
 to fixed values. Another member function should display it, in 11:59:59 format. The final
 member function should add two objects of type time passed as arguments.
 Amain() program should create two initialized time objects (should they be const?) and
 one that isn’t initialized. Then it should add the two initialized values together, leaving the
 result in the third time variable. Finally it should display the value of this third variable.
 Make appropriate member functions const.*/
#include <iostream>
using namespace std;
class Time{
    int hours;
    int minutes;
    int seconds;
public:
    Time(){
        hours=0;
        minutes=0;
        seconds=0;
    }
    Time(int _hours,int _minutes,int _seconds){
        hours=_hours;
        minutes=_minutes;
        seconds=_seconds;
    }
    void display(){
        cout<<hours<<":"<<minutes<<":"<<seconds;
    }
    void add(const Time &T1,const Time &T2){
        seconds=T1.seconds+T2.seconds;
        minutes=T1.minutes+T2.minutes+(seconds/60);
        hours=T1.hours+T2.hours+(minutes/60);
        seconds%=60;
        minutes%=60;
        hours%=24;
    }
};
int main()
{  Time T1(2,30,30);
   Time T2(1,40,30);
   Time res;
   res.add(T1,T2);
   res.display();

    return 0;
}
