#include <iostream>
#include <cstring>

using namespace std;

struct emp {
    int id;
    char name[20];
    int age;
    int salary;
};
int main() {
    emp* e1 = new emp;

    cout << "Enter id: ";
    cin >> e1->id;

    cout << "Enter name: ";
    cin>>strcpy(e1->name, "_name");

    cout << "Enter age: ";
    cin >> e1->age;

    cout << "Enter salary: ";
    cin >> e1->salary;

    cout << "ID: " << e1->id << endl;
    cout << "Name: " << e1->name << endl;
    cout << "Age: " << e1->age << endl;
    cout << "Salary: " << e1->salary << endl;

    delete e1;

    return 0;
}
