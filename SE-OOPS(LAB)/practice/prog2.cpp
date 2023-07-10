#include<iostream>
using namespace std;
class vectar
{
  int x1,x2,y1,y2;
public:
    vectar()
    {
        x1=1;
        x2=2;
        y1=3;
        y2=4;
    }
    vectar(int x1,int x2,int y1,int y2)
    {
        this->x1=x1;
        this->x2=x2;
        this->y1=y1;
        this->y2=y2;
    }
    vectar(vectar &z)
    {
        x1=z.x1;
        x2=z.x2;
        y1=z.y1;
        y2=z.y2;
    }
    void dot()
    {
        cout<<"The dot product of vect1 and vect2 is ["<<(x1*y1)<<" "<<(x2*y2)<<"]"<<endl;
    }
    ~vectar()
    {
        cout<<"deleting..."<<endl;
    }
};
int main()
{

   vectar v1;
   vectar v2(4,5,6,7);
   vectar v3(v2);
   v1.dot();
   v2.dot();
   v3.dot();
   return 0;
}
