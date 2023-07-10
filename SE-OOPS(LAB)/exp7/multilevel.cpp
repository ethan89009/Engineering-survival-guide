#include <iostream>
#include <string>
using namespace std;

class Shape
{   protected:
    int dim[10],n;
    void setShapeData()
    {
        cout<<"enter the no of dimensions\n";
        cin>>n;
        cout<<"enter the length for "<<n<<" sides\n";
        for(int i=0;i<n;i++)
        {   cin>>dim[i];}
    }
    int* getDim(){return dim;}
    int getSize(){  return n;}
};
class Quadrilateral: public Shape
{  int no_of_equalsides;
   public:
       void setQuadData()
       {    setShapeData();
            cout<<"enter no of equal sides\n";
            cin>>no_of_equalsides;
       }
       int get_EqualSides()
       {    return no_of_equalsides; }
};
class Rectangle: public Quadrilateral
{  public:
    void computeArea()
    {   int *d;
        d=getDim();
        int prod=1;
        for(int i=0;i<getSize();i++)
        {   prod=prod*dim[i];
        }
        cout<<"area="<<prod<<endl;
    }
};
int main()
{   Rectangle r;
    r.setQuadData();
    r.computeArea();
    return 0;
}

