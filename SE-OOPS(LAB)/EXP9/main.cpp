//polymorphism
//some notes:
//which ever class inherits an abstract class
//that class(derived class)  must implement the
// pure virtual functions else that class is also
// considered as an abstract class.
//
#include <iostream>

using namespace std;

class A{
public:
    int a;
    virtual void show()
    {
        cout<<" a = "<<a<<endl;
    }
};

class B:public A
{
public:
    int b;
    void show()
    {
        A::show();
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
