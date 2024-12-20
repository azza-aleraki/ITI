#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class Person{
protected:
    int id;
    char name[30];
    int age;
public:
    void setId(int _id){id=_id;}
    void setName(char* _name){strcpy(name,_name);}
    void setAge(int _age){age =_age;}
    int getId(){return id;}
    char* getName(){return name;}
    int getAge(){return age;}

    Person(int _id=0,char* _name="noName",int _age=25){
        id=_id;
        strcpy(name,_name);
        age=_age;
    }
    void print(){
        cout<<id<<" : "<<name<<" : "<<age<<endl;
    }


};
class Employee : public  Person{
    int salary;
public:
    void setSalary(int _salary){salary=_salary;}
    int getSalary(){return salary;}

    Employee(int _id,char* _name,int _age,int _salary){
        id=_id;
        strcpy(name,_name);
        age=_age;
        salary=_salary;
    }
    void print(){
        cout<<id<<" : "<<name<<" : "<<age<<" : "<<salary<<endl;
    }

};
class Student : public Person{
    int grade;
public:
    void setGrade(int _grade){grade=_grade;}
    int getGrade(){return grade;}

    Student(int _id ,char* _name,int _age,int _grade){
        id=_id;
        strcpy(name,_name);
        age=_age;
        grade=_grade;
    }
    void print(){
        cout<<id<<" : "<<name<<" : "<<age<<" : "<<grade<<endl;
    }

};
void myFun(Person * P){
  P->print();

}

int main()
{
    Person P(1,"Azza");
    myFun(&P);
    Employee E(1,"Azza Mohammed",23,10000);
    myFun(&E);
    Student S(1,"Eman",4,1);
    myFun(&S);

    return 0;
}
