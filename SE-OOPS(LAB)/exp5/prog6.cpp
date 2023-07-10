//wap to find the negative value of a  number object using operator overloading concept , overload unary - operator
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
    void operator-()
    {
        x=-x;
    }
    void disp(){cout<<"the num="<<x<<endl;}
};
int main()
{
    num n1(6);
    -n1;
    n1.disp();
    return 0;

}
