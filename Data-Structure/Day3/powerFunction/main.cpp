#include <iostream>
using namespace std;

int powerOf(int x , int y){
    if(y==0)
        return 1;
    else
        return x*powerOf(x , y-1);
}
int main()
{
   int power = powerOf(2,3);
   cout<<power;

    return 0;
}
