#include <iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
/* Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent
 toll. Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps
 track of the number of cars that have gone by, and of the total amount of money collected.
 Model this tollbooth with a class called tollBooth. The two data items are a type
 unsigned int to hold the total number of cars, and a type double to hold the total amount
 of money collected. A constructor initializes both of these to 0. A member function called
 payingCar() increments the car total and adds 0.50 to the cash total. Another function,
 called nopayCar(), increments the car total but adds nothing to the cash total. Finally, a
 member function called display() displays the two totals. Make appropriate member
 functions const.
 Include a program to test this class. This program should allow the user to push one key
 to count a paying car, and another to count a nonpaying car. Pushing the Esc key should
 cause the program to print out the total cars and total cash and then exit.*/
class Tollbooth{
    unsigned int cars;
    double cash;
public:
    Tollbooth(){
        cars=0;
        cash=0;
    }
  void payingCar(){
      cars++;
      cash+=0.50;
      display();
  }
  void nopayingCar(){
      cars++;
      cash+=0;
      display();
  }
  void display(){
      cout<<"Total Cars: "<<cars<<endl;
      cout<<"Total Cash: "<<cash<<endl;
  }

};
int main()
{
    Tollbooth booth;
    char choice;
    do{
            cout<<"Enter 'p' to count a paying car ,'n' to count nonpayingCay\n";
            choice=_getche();
            cout<<endl;
            system("cls");

            switch(choice){
            case 27:
                booth.display();
                return 0;
            break;
            case 'P' :
            case 'p' :
                booth.payingCar();
                //cout<<"This is total paying cars\n";
            break;
            case 'N':
            case 'n':
                booth.nopayingCar();
                //cout<<"This is Totoal Nonpaying cars\n ";
            break;
            default:
                cout<<"invalid key enter 'p'or 'n' or Esc to Exit\n";
                    system("cls");

            }
    }
    while(true);

    return 0;
}
