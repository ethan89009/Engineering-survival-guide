//to convert class type "feet " to "inches " and vice versa using conversion routines
#include<iostream>
using namespace std;
class feet
{

public:
    double ft;
    feet()
    {
        ft=0;
    }
    feet(double x)
    {
        ft=x;
    }
    void disp(){cout<<"feet="<<ft<<endl;}
};
class inches
{
public:
    double in;
    inches()
    {
        in=0;
    }
    inches(double x)
    {
        in=x;
    }
    inches(feet &x)
    {
        in=x.ft*12;
    }
    operator feet()
    {
        feet f1;
        f1.ft=in/12;
        return f1;
    }
    void disp(){cout<<"inches="<<in<<endl;}
};
int main()
{
    feet f1(6);
    inches in1;
    in1=f1;
    feet f2;
    inches in2(60);
    f2=in2;
    f1.disp();
    in1.disp();
    f2.disp();
    in2.disp();
    return 0;
}
