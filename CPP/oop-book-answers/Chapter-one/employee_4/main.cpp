#include <iostream>
using namespace std;
/* Create an employee class, basing it on Exercise 4 of Chapter 4. The member data should
 comprise an int for storing the employee number and a float for storing the employee’s
 compensation. Member functions should allow the user to enter this data and display it.
 Write a main() that allows the user to enter data for three employees and display it.
*/
class Employee{
    int employeeNumber;
    float compensation;
public:
    void enterEmp(){
        cout<<"Enter Employee Number\n";
        cin>>employeeNumber;
        cout<<"Enter Employee Compensation\n";
        cin>>compensation;
    }
    void displayEmp(){
        cout<<" Number : "<<employeeNumber;
        cout<<" compensation : "<<compensation;
    }
};

int main()
{ Employee emp1,emp2,emp3;
emp1.enterEmp();
emp2.enterEmp();
emp3.enterEmp();


cout<<"First employee ditails : ";
emp1.displayEmp();
cout<<"\nsecond employee ditails : ";
emp2.displayEmp();
cout<<"\nthird employee ditails : ";
emp3.displayEmp();

    return 0;
}
