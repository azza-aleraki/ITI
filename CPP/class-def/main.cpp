#include <iostream>
using namespace std;
class leverage{
    int crowbar;
public:
    leverage(int _crowbar=5){
        crowbar=_crowbar;
    }
    void setCrowbar(int _crowbar){crowbar=_crowbar;}
    int getCrowbar(){return crowbar;}
    void pry(){
        cout<<crowbar<<endl;
    }
};

int main()
{
    leverage lev1;
    lev1.setCrowbar(10);
    lev1.pry();
    return 0;
}
