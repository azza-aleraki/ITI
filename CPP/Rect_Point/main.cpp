#include <iostream>
using namespace std;

class Point {
    int x;
    int y;

public:
    void setX(int _x) { x = _x; }
    void setY(int _y) { y = _y; }
    int getX() { return x; }
    int getY() { return y; }

    Point() {
        x = y = 0;
        cout << "Point Ctor\n";
    }

    Point(int _x, int _y) {
        x = _x;
        y = _y;
        cout << "Point Ctor\n";
    }

    ~Point() {
        cout << "Point Dtor\n";
    }

    void print() {
        cout << "\n(" << x << "," << y << ")";
    }
};

class Rectangle {
    Point ul;
    Point lr;

public:
  Rectangle(int x1, int y1, int x2, int y2):ul(x1,y1),lr(x2,y2) {
   /*  ul.setX(x1);
     ul.setY(y1);
     lr.setX(x2);
     lr.setY(y2);
    cout << "Rectangle Ctor\n";*/
}

    ~Rectangle() {
        cout << "Rectangle Dtor\n";
    }

    void setUl(int x, int y) {
        ul.setX(x);
        ul.setY(y);
    }
      void setLr(int x, int y) {
        lr.setX(x);
        lr.setY(y);
    }

    Point getUl() { return ul; }
    Point getLr() { return lr; }

    void print() {
        ul.print();
        lr.print();
        cout << endl;
    }
};
class Circle{
int raduis;
Point center;
public:
    Circle(int x,int y,int r):center(x,y) ,raduis(r){}
    void setCenter(int x ,int y){
        center.setX(x);
        center.setY(y);
    }
    void setRaduis(int _raduis){
        raduis=_raduis;
    }
    int getRaduis(){return raduis;}
    Point getCenter(){return center;}
    void print(){
        cout<<"Circle raduis: "<<raduis;
        cout<<"\nCircle Center: ";
        center.print();
    }
    };

int main() {
    Rectangle r1(10, 20, 30, 40);
    //r1.setUl(10, 20);
   // r1.setLr(20, 30);
    r1.print();
    Circle C1(2,8,9);
    cout<<endl;
    C1.print();
    return 0;
}
