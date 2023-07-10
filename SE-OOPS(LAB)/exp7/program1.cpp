#include<iostream>
 using namespace std;
 class A
 {
     int a;
 public:
     void setA(int s){a=s;}
     int getA(){return a;}
 };                                // public mode means =>protected section will be protected and public will be public
 class B:public A                 // protected mode
 {
     int b;
 public:
    void setB(int b1){b=b1;}
    int getB(){return b;}
    void disp()
    {
        cout<<"a= "<<getA()<<endl;
        cout<<"b= "<<getB()<<endl;
    }
    void compute()
    {
        cout<<"sum = "<<getA()+b<<endl;
    }
 };
int main()
{
    B obj;
    obj.setA(3);
    obj.setB(4);
    obj.disp();
    obj.compute();
    return 0;
}
