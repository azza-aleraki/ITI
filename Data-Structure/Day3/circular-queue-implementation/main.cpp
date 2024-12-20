#include <iostream>
using namespace std;
class Queue{
    int rear;
    int front;
    int size;
    int* arr;
public:
    Queue(int _size=5){
        rear=front=-1;
        size=_size;
        arr=new int[size];
    }
    int isEmpty(){
            return(rear==-1);
        }
    int isFull(){
            return (rear == size-1 && front==0)||(front == rear+1);
        }

    void enQueue(int d){
            if(isFull()==1){
                cout<<"Queue is Full\n";
                return;
            }
            if(rear==-1)
                rear=front=0;
            else if(rear==size-1)
                rear=0;
            else
                rear++;
            arr[rear]=d;
        }

        int deQueue(int& d){
            if(isEmpty()==1){
                cout<<"Queue is Empty\n";
                return 0;
            }
            d=arr[front];
            if(front==rear)
                rear=front=-1;
            else if(front==size-1)
                front=0;
            else front++;
            return 1;
        }
};
int main()
{
    Queue q1(3);
    q1.enQueue(10);
    q1.enQueue(20);
    q1.enQueue(30);
    q1.enQueue(30);
    q1.enQueue(30);
    int x=0;
    if(q1.deQueue(x)!=0)
        cout<<x;
    if(q1.deQueue(x)!=0)
        cout<<x;
    if(q1.deQueue(x)!=0)
        cout<<x;

    return 0;
}
