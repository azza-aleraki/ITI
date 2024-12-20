#include <iostream>
using namespace std;
class Base{
    protected:
    int x;
    int y;
public:
    Base(int _x =0,int _y=0){
        x=_x;
        y=_y;
    }
    int add(){
        cout<<"Add From Base Class\n";
        return x+y;
    }
};
class Child:public Base{
    int z;
public:
    Child(){
    }
};
int main()
{
    Base b(2,3);
   cout<< b.add();
    return 0;
}
