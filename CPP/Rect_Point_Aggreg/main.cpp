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
    Point* ul;
    Point* lr;

public:
    Rectangle(Point* _ul, Point* _lr) : ul(_ul), lr(_lr) {
        cout << "Rectangle Ctor\n";
    }

    ~Rectangle() {
        cout << "Rectangle Dtor\n";
    }

    void setUl(Point* _ul) {
        ul = _ul;
    }

    Point* getUl() { return ul; }
    Point* getLr() { return lr; }

    void print() {
        cout << "Rectangle corners: ";
        ul->print();
        lr->print();
        cout << endl;
    }
};

int main() {
    Point p1(1, 2), p2(3, 4);
    Rectangle rect(&p1, &p2);
    rect.print();
    p1.print();
    p2.print();

    return 0;
}
