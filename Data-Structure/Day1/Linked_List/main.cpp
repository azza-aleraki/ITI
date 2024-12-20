#include <iostream>
#include<string.h>
using namespace std;
struct node{
    int id;
    char name[10];
    int age;
    node* next;
    node* prev;
};
class LinkedList{
    node* head;
    node* tail;
public:
    LinkedList(){
        head=tail=NULL;
    }
    void append(int id,char* name,int age){
        node* temp =new node();
        if(temp != NULL){

            temp->id=id;
            strcpy(temp->name,name);
            temp->age=age;
        }
        if(head==NULL){
            temp->prev=NULL;
            head =tail=temp;

        }
        else{
            temp->prev=tail;
            tail->next=temp;
            tail=temp;

        }
    }
    void display(){
        node* temp=head;
        while(temp != NULL){
            cout<<temp->id<<" : "<<temp->name<<" : "<<temp->age<<endl;
            temp=temp->next;
        }
    }

};


int main()
{
    LinkedList l1;
    l1.append(1,"Azza",23);
    LinkedList l2;
    l2.append(2,"Eman",16);
    LinkedList l3;
    l3.append(3,"salma",22);
    l1.display();
    l2.display();
    l3.display();


    return 0;
}
