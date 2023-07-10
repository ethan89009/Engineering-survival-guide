//using pure virtual functions
#include<iostream>

using namespace std;

class A{
public:
    int a;
    virtual void show()=0;
};

class B:public A
{
public:
    int b;
    void show()
    {
        cout<<"b ="<<b;
}
};

int main()
{
        A *obj1;
        B obj2;
        obj2.a=3;
        obj2.b=4;
        obj1=&obj2;
        obj1->show();
        return 0;
}
