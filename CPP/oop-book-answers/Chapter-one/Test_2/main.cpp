#include<iostream>
using namespace std;
class Parent
{
protected:
    int myVar;


public:
    Parent(int x) { myVar = x; }
    void powerTwo() { cout << myVar * myVar; }
    virtual void powerThree() { cout << myVar * myVar * myVar; }
};
class Child : public Parent
{
protected:
    int myData;


public:
    Child(int a, int b) : Parent(a) { myData = b; }
    void powerTwo() { cout << myData * myData; }
    void powerThree() { cout << myData * myData * myData; }
};
int main()
{
    Child myCh(2, 3);
    Parent *myPtr;
    myPtr = &myCh;
    myPtr->powerTwo();   // Line1
    myPtr->powerThree(); // Line 2
    return 0;
}

