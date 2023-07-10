//to compare two class objects using relational operators , implement using friend functions
#include<iostream>
using namespace std;
class num
{
    int x;
public:
    num()
    {
        x=0;
    }
    num(int x)
    {
        this->x=x;
    }
    friend int operator>(num &,num &);
    friend int operator<(num &,num &);
    friend int operator>=(num &,num &);
    friend int operator<=(num &,num &);
    friend int operator!=(num &,num &);
    friend int operator==(num &,num &);

    void disp(){cout<<"the num="<<x<<endl;}
};
int operator<(num &n1,num &n2){return n1.x<n2.x;}
int operator>(num &n1,num &n2){return n1.x>n2.x;}
int operator<=(num &n1,num &n2){return n1.x<=n2.x;}
int operator>=(num &n1,num &n2){return n1.x>=n2.x;}
int operator!=(num &n1,num &n2){return n1.x!=n2.x;}
int operator==(num &n1,num &n2){return n1.x==n2.x;}


int main()
{
    num n1(6),n2(1),n3(7),n4(7);
    cout<<"n1:";
    n1.disp();
    cout<<"n2:";
    n2.disp();
    cout<<"n3:";
    n3.disp();
    cout<<"n4:";
    n4.disp();
    if(n1>n2)
        cout<<"n1 is greater than n2"<<endl;
    if(n2<n3)
        cout<<"n2 is less than n3"<<endl;
    if(n3==n4)
        cout<<"n3 is equal to n4"<<endl;
    if(n1!=n2)
        cout<<"n1 is not equal to n2"<<endl;
    return 0;
}
