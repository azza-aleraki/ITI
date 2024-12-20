#include <iostream>
using namespace std;

class Complex{
    int real;
    int img;
public:
    void setReal(int r){
        real = r;
    }
    int getReal(){
        return real;
    }
    void setImg(int i){
        img = i;
    }
    int getImg(){
        return img;
    }
};
void complex_fun(Complex c){
cout<<c.getReal()<<" + ";
cout<<c.getImg()<<"i";
}
int main()
{
    Complex* c1 = new Complex;
    cout<<"Enter Real Part \n";
int real;
cin>>real;
c1->setReal(real);
cout<<"Enter Imganery Part\n";
int img;
cin>>img;
c1->setImg(img);
complex_fun(*c1);
delete c1;


    return 0;
}




