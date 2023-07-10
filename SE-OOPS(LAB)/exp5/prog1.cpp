//using member functions to implement operator overloading

#include<iostream>
using namespace std;
class cmplex
{
    double real,imag;
public:
    cmplex(){real=imag=1;}
    cmplex(double r1,double i1){real=r1;imag=i1;}
    cmplex operator+(cmplex c2)
    {
        cmplex temp;
        temp.real=real+c2.real;
        temp.imag=imag+c2.imag;
        return temp;
    }
    cmplex operator-(cmplex c2)
    {
        cmplex temp;
        temp.real=real-c2.real;
        temp.imag=imag-c2.imag;
        return temp;
    }
    void disp()
    {
        cout<<real<<" + ("<<imag<<")i"<<endl;
    }
};
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
