#include <iostream>
using namespace std;
/* *1. Create a class that imitates part of the functionality of the basic data type int. Call the
 class Int (note different capitalization). The only data in this class is an int variable.
 Include member functions to initialize an Int to 0, to initialize it to an int value, to
display it (it looks just like an int), and to add two Int values.
 Write a program that exercises this class by creating one uninitialized and two initialized
 Int values, adding the two initialized values and placing the response in the uninitialized
 value, and then displaying this result.*/
class Int{
    int variable;
public:
    Int()
    {
    variable=0;
    }
    Int(int _variable){
    variable=_variable;}
    void display(){
    cout<<variable<<endl;
    }
    void add(Int &x){
       variable+=x.variable;

    }
};
int main()
{
    Int var1(10),var2(20);
    var1.add(var2);
    var1.display();
    return 0;
}
