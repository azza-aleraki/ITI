#include <iostream>
#include<numeric>
using namespace std;
class Fraction {
    int numerator;
    int denominator;
public:
    void setNum(int num){numerator=num;}
    void setDen(int den){denominator=den;}
    int getNum(){return numerator;}
    int getDen(){return denominator;}

    Fraction(){
        numerator=1;
        denominator=1;
    }
    Fraction(int num,int den){
        if(den==0){
            cout<<"Can Not Div By Zero\n";
            den=1;
            num=0;
        }
        numerator=num;
        denominator=den;
        simplfy();

    }

    Fraction operator+(Fraction &F){
        Fraction res;
        res.numerator=numerator*F.denominator+denominator*F.numerator;
        res.denominator=denominator*F.denominator;
        return res;

    }
    Fraction operator-(Fraction &F){
        Fraction res;
        res.numerator=numerator*F.denominator-denominator*F.numerator;
        res.denominator=denominator*F.denominator;
        return res;    }

        Fraction operator*(Fraction &F){
            Fraction res;
            res.numerator=numerator*F.numerator;
            res.denominator=denominator*F.denominator;
            return res;
        }
        Fraction operator/(Fraction &F){
            if (F.numerator == 0) {
            cout << "Error: Division by zero!" << endl;
            return Fraction();
        }
            Fraction res;
            res.numerator=numerator*F.denominator;
            res.denominator=F.numerator*denominator;
            return res;
        }
          Fraction& operator++() {
        numerator += denominator;
        return *this;
    }
            Fraction operator++(int) {
        Fraction temp = *this;
        numerator += denominator;
        return temp;
    }

    Fraction& operator--() {
        numerator -= denominator;
        return *this;
    }

    Fraction operator--(int) {
        Fraction temp = *this;
        numerator -= denominator;
        return temp;
    }

        explicit operator float() {
        return static_cast<float>(numerator) / denominator;
}
   Fraction& operator=(const Fraction F){
        if(this==&F){
            return *this;

    }
       numerator = F.numerator;
        denominator = F.denominator;
        return *this;}

        void print(){
            if(denominator==1)
            cout<<numerator<<endl;
            cout<<numerator<<"/"<<denominator<<endl;
        }
        int findGCD (int numerator,int denominator){
            while(denominator !=0){
                int temp=denominator;
                denominator=numerator%denominator;
                numerator=temp;
            }
            return numerator;
        }
        void simplfy(){
            int gcd=findGCD(numerator,denominator);
            numerator/=gcd;
            denominator/=gcd;

            if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
        }



};

int main()
{
    Fraction F(2,3), F1(9,6),F2;
    F2=F+F1;
    F2.print();
    F2=F1-F;
    F2.print();
    F2=F1*F;
    F2.print();
    F2=F1/F;
    F2.print();
    F++;
    F.print();
    F= (float)F1;
    F.print();



return 0;
}
