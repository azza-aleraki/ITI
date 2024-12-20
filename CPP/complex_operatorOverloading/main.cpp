#include <iostream>
using namespace std;

class Complex {
    int real;
    int img;
    static int counter;
public:
    Complex(int r, int i) {
        real = r;
        img = i;
        counter++;
    }
      static int getCounter() {
        return counter;
    }
    void setReal(int r) { real = r; }
    int getReal() { return real; }
    void setImg(int i) { img = i; }
    int getImg() { return img; }
    Complex operator+(Complex c) {
        return Complex(real + c.real, img + c.img);
    }
    Complex operator+(int n) {
        return Complex(real + n, img);
    }
    friend Complex operator+(int n, Complex& c) {
        return Complex(n + c.real, c.img);
    }
    explicit operator int() {
        return real;
    }
    Complex& operator++() {
        ++real;
        return *this;
    }
    Complex operator++(int) {
        Complex temp = *this;
        ++real;
        return temp;
    }
    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.real << " + " << c.img << "i";
        return out;
    }

};
int Complex::counter = 0;
int main() {
    int c;
    Complex c1(3, 4);
    Complex c2(2, 4);
    Complex c3 = c1 + c2;
    cout << c3 << endl;
    c3 = c1 + 2;
    cout << c3 << endl;
    c = (int)c2;
    cout << c << endl;
    cout << "Number of Complex objects created: " << Complex::getCounter() << endl;
    cout << c1 << endl;

    return 0;
}

