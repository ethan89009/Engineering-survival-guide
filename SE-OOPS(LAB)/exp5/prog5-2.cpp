//wap to overload pre decrement and post decrement using friend functions
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
      friend void operator--(num &);
      friend void operator--(num &,int);
      void disp(){cout<<"The num="<<x<<endl;}
};
    void operator--(num &s)
    {
        --s.x;
    }
    void operator--(num &s,int x)
    {
        s.x--;
    }

int main()
{
    num n1;
    n1--;
    --n1;
    n1.disp();
    return 0;
}
