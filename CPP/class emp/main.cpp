#include <iostream>
#include <cstring>
using namespace std;

class Emp {
    int id;
    char name[20];
    int age;

public:
    int getId() {
        return id;
    }
    void setId(int _id) {
        id = _id;
    }
    const char* getName() {
        return name;
    }
    void setName(char* _name) {
        strcpy(name,_name);
    }
    int getAge() {
        return age;
    }
    void setAge(int _age) {
        age = _age;
    }
};

int main() {
    Emp* e1 = new Emp;
    cout<<"Enter id : \n";
    int id ;
    cin>>id;
    e1->setId(id);
    cout<<"Enter Name : \n";
    char name[20];
    cin>>name;
    e1->setName(name);
    cout<<"Enter Age : \n";
    int age;
    cin>>age;
    e1->setAge(age);
    cout<<e1->getId()<<" : ";
    cout<<e1->getName()<<" : ";
    cout<<e1->getAge();










    return 0;
}

