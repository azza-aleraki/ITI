// Write a class definition that creates a class called leverage
//with one private data member, crowbar,of type int and one public function whose declaration is void pry(),
//Write a statement that defines an object called lever1 of the leverage class,
// Write a statement that executes the pry() function in the lever1 object,
//Write a member function called getcrow() for the leverage class This function should return the value of the crowbar data.
// Assume the function is defined within the class definition,
//write a constructor that initializes to 0 the crowbar data, a member of the leverage class
#include <iostream>
using namespace std;
class leverage{
    int crowbar;
public:
    leverage(int _crowbar=5){
        crowbar=_crowbar;
    }
    void setcrow(int _crowbar){crowbar=_crowbar;}
    int getcrow() {return crowbar;}
    void pry(){
        cout<<crowbar<<endl;
    }
};

int main()
{
    leverage lever1;
    lever1.setcrow(10);
    lever1.pry();
    return 0;
}


