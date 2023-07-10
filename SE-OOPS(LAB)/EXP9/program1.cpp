#include<iostream>

using namespace std;

class Shape
{
public:

    int s1,s2;
    void setShape()
    {
        cout<<"Enter s1 and s2\n"<<endl;
        cin>>s1>>s2;
    }
    virtual void area()
    {
        cout<<s1*s2<<endl;
    }

};
class Triangle:public Shape
{
public:

    double base;
    double height;
    void setTriangle()
    {
        cout<<"Set base and height\n";
        cin>>base>>height;
    }
    void area()
    {
        cout<<"area of triangle = "<<0.5*base*height<<endl;
    }

};
class Rectangle:public Shape
{
public:

    double length;
    double width;
    void setRect()
    {
        cout<<"Set length and width\n";
        cin>>length>>width;
    }
    void area()
    {
        cout<<"area of rectangle = "<<length*width<<endl;
    }

};
class Square:public Shape
{
public:

    double side;
    void setSquare()
    {
        cout<<"Set side \n";
        cin>>side;
    }
    void area()
    {
        cout<<"area of square = "<<side*side<<endl;
    }

};

int main()
{

    Shape *bptr;
    Triangle t1;
    Rectangle rec1;
    Square s1;

    t1.setTriangle();
    rec1.setRect();
    s1.setSquare();

    bptr=&t1;
    bptr->area();
    bptr=&rec1;
    bptr->area();
    bptr=&s1;
    bptr->area();
    return 0;
}
