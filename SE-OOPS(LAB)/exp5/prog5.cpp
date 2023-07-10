//wap to overload pre decrement and post decrement using member functions
#include<iostream>
using namespace std;
class IncreDrecNum
{
    int i;
public:
    IncreDrecNum()
    {
        i=0;
    }
    IncreDrecNum(int x)
    {
        i=x;
    }
    void operator--()
    {
        --i;
    }
    void operator--(int x)
    {
        i=i-1;
    }
    void disp(){cout<<"Numb="<<i<<endl;}
};
int main()
{
    IncreDrecNum x1;
    x1--;
    --x1;
    x1.disp();
    return 0;
}
