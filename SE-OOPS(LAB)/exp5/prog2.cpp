//using friend functions to implement operator overloading
#include<iostream>
using namespace std;
class cmplex
{
    double real,imag;
public:
    cmplex(){real=imag=1;}
    cmplex(double r1,double i1){real=r1;imag=i1;}
    friend cmplex operator+(cmplex c1,cmplex c2);
    friend cmplex operator-(cmplex c1,cmplex c2);
    void disp()
    {
        cout<<real<<" + ("<<imag<<")i"<<endl;
    }
};

cmplex operator+(cmplex c1,cmplex c2)
{
    cmplex temp;
    temp.real=c1.real+c2.real;
    temp.imag=c1.imag+c2.imag;
    return temp;
}
cmplex operator-(cmplex c1,cmplex c2)
{
    cmplex temp;
    temp.real=c1.real-c2.real;
    temp.imag=c1.imag-c2.imag;
    return temp;
}
int main()
{
    cmplex c1(3,4),c2(5,6);
    cmplex c3,c4;
    c3=c1+c2;
    c4=c1-c2;
    c1.disp();
    c2.disp();
    c3.disp();
    c4.disp();
    return 0;
}

