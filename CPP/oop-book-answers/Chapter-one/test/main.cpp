#include<iostream>
using namespace std;
class Base{
public:
    Base(){
    cout<<"Constructing Base\n";
    }
    ~Base(){
        cout<<"Destructor Base\n";
    }
};
class Derived{
public:
    Derived(){
            cout<<"Constructing Derived\n";
    }
    ~Derived(){
            cout<<"Deconstructing Derived\n";

    }
};

int main(void){
    Derived *d=new Derived();
    Base *b= d;
    delete b;
    return 0;


         }








