#include <iostream>

using namespace std;
class Shape{
protected:
    int firstDim;
    int secondDim;
public:
    void setfirstDim(int _firstDim){firstDim=_firstDim;}
    void setsecondDim(int _secondDim){secondDim=_secondDim;}
    int getfirstDim(){return firstDim;}
    int getsecondDim(){return secondDim;}
    Shape(int _firstDim=0,int _secondDim=0)
    {
        firstDim=_firstDim;
        secondDim=_secondDim;
       // cout<<"Hi,From Shape Class\n";
    }
    virtual int area()=0;
};
class Rectangle:public Shape{
    public:
       Rectangle(int _firstDim=0,int _secondDim=0)
    {
               firstDim=_firstDim;
               secondDim=_secondDim;
               //cout<<firstDim<<" : "<<secondDim<<endl;


    }
    int area(){
        return firstDim*secondDim;
    }

};
class Circle:public Shape{
public:
       Circle(int _firstDim=0):Shape(_firstDim)
    {
        // secondDim=_firstDim;

        // cout<<firstDim<<" : "<<secondDim<<endl;
    }
    int area(){
        return firstDim*firstDim*22/7;
    }
};
class Trinagle:public Shape{
public:
    Trinagle(int _firstDim,int _secondDim):Shape(_firstDim,_secondDim)
    {

    }
    int area(){
        return firstDim*secondDim*0.5;
    }

};
class sqare:public Rectangle{
public:
    sqare(int _firstDim):Rectangle(_firstDim,_firstDim){}

};
int myfun(Shape * ptr){
   return ptr->area();

}
int sumArea(Shape * arr[],int s){
    int sum=0;
    for (int i=0;i<s;i++){
        sum+=arr[i]->area();
    }
    return sum;

}

int main()
{
    Rectangle R(10,20);
    cout<<R.area()<<endl;
    Circle C(7);
   cout<< C.area()<<endl;
   Trinagle T(8,10);
   cout<<T.area()<<endl;
   sqare s(4);
   cout<<s.area()<<endl;
   Shape * g;
   g=&R;
   cout<<myfun(g)<<endl;
   Shape* arr[4]={&R,&C,&T,&s};
   cout<<sumArea(arr,4);

    return 0;
}
