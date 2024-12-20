#include <iostream>
using namespace std;
class Duration{
    int hours;
    int minutes;
    int seconds;
public:
    Duration(){
        hours=0;
        minutes=0;
        seconds=0;
    }
    Duration(int _hours,int _minutes,int _seconds){
        hours=_hours;
        minutes=_minutes;
        seconds=_seconds;
        calculate();
    }
    Duration(int s){
    hours=s/3600;
    minutes=(s%3600)/60;
    seconds=s%60;
    }
    void setHours(int _hours){hours=_hours;}
    void setMinutes(int _minutes){minutes=_minutes;}
    void setSeconds(int _seconds){seconds=_seconds;}
    int getHours(){return hours;}
    int getMinutes(){return minutes;}
    int getSeconds(){return seconds;}
    void calculate(){
        if(seconds>=60){
                minutes+=seconds/60;
                seconds%=60;
        }
        if(minutes>=60){
            hours+=minutes/60;
            minutes%=60;
        }

    }
     void print(){
         cout<<"Hours:"<<hours<<", Minutes:"<<minutes<<", Seconds:"<<seconds<<endl;
     }
     Duration operator+(Duration D){
         Duration res;
         res.hours=hours+D.hours;
         res.minutes=minutes+D.minutes;
         res.seconds=seconds+D.seconds;
         res.calculate();
         return res;
     }
    Duration operator+(int x) {
        Duration res;
        res.seconds = seconds + x;
        res.calculate();
        return res;
    }
    Duration operator++(){

        minutes=minutes+1;
        calculate();
        return *this;

    }
   Duration operator++(int) {
    Duration temp = *this;
    minutes = minutes + 1;
    calculate();
    return temp;
}
    int operator ==(Duration D){
        if(hours==D.hours&&minutes==D.minutes&&seconds==D.seconds)
            return 1;
            return 0;
    }
    int operator !=(Duration D){
        return !(*this==D);
    }

    friend Duration operator+(int x, Duration D);
};

Duration operator+(int x, Duration D) {
    Duration res;
    res.hours = D.hours;
    res.minutes = D.minutes;
    res.seconds = D.seconds + x;
    res.calculate();
    return res;
}

int main()
{
    Duration D(1,80,10) ,D1(3600),D2,D3,D4,D5,D6;

    D.print();
    D1.print();
    D2=D1+D;
    D2.print();
    D3=D1+3700;
    D3.print();
    D4=3700+D1;
    D4.print();
    D5= D++;
    D5.print();
    D6= ++D1;
    D6.print();
    if (D1 == D2) {
        cout << "D1 and D2 are equal.\n";
    } else {
        cout << "D1 and D2 are not equal.\n";
    }

    if (D1 == D3) {
        cout << "D1 and D3 are equal.\n";
    } else {
        cout << "D1 and D3 are not equal.\n";
    }

    return 0;
}
