#include <iostream>
using namespace std;

class Complex{
    int real;
    int img;
public:
    void setReal(int _real){
        real=_real;
    }
    void setImg(int _img){
     img=_img;

    }
    int getReal(){
    return real;
    }
    int getImg(){
    return img;
    }
    Complex(){
        real=img=0;
    }
    Complex(int _real,int _img){
        real=_real;
        img=_img;
    }
    void print(){
        if(img>0)
        {
            cout<<real<<"+"<<img<<"i\n";
        }
        else if(img<0){
            cout<<real<<img<<"i\n";
        }
        else cout<<real;
    }
    Complex add(Complex c){
        Complex result;
        result.real=c.real+real;
        result.img=c.img +img;
        return result;

    }

};
    Complex add(Complex c1,Complex c2){
        Complex result;
        result.setReal(c1.getReal()+c2.getReal());
        result.setImg(c1.getImg()+c2.getImg());
        return result;
    }

int main()

{
    Complex c1(10,20),c2(30,40);
    c1.print();
    c1.setReal(10);
    c2.setReal(20);
    c1.setImg(0);
    c2.setImg(5);
    Complex c=add(c1,c2);
    Complex c3=c1.add(c2);
    c.print();
    c3.print();
    return 0;
}

