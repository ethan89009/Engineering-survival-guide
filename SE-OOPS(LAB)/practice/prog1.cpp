#include<iostream>
using namespace std;
class rectangle
{
    int length,width;
public:
    rectangle()
    {
        length=10;
        width=10;
    }
    rectangle(int l,int w)
    {
        length=l;
        width=w;
    }
    rectangle(rectangle &x)
    {
        length=x.length;
        width=x.width;
    }
    void calcArea()
    {   int area;
        cout<<"The area of the rectangle is ="<<endl;
        area=length*width;
        cout<<area<<endl;
    }
};
int main()
{
    rectangle r1;
    rectangle r2(5,8);
    rectangle r3(r2);
    r1.calcArea();
    r2.calcArea();
    r3.calcArea();
    return 0;
}
