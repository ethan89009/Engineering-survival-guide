// overloading << and >> operators in c++
#include<iostream>
using namespace std;

 class InsertionExtractionOperator
 {
     int a;
 public:
    friend ostream & operator <<(ostream &out, InsertionExtractionOperator &op);
    friend istream & operator >>(istream &in, InsertionExtractionOperator &op);
 };
ostream & operator <<(ostream &out, InsertionExtractionOperator &op)
{
    out<<op.a;
    return out;
}
istream & operator >>(istream &in, InsertionExtractionOperator &op)
{
    in>>op.a;
    return in;
}
int main()
{
    InsertionExtractionOperator i1,i2;
    cout<<"reading an obj\n";
    cin>>i1>>i2;
    cout<<"displaying an object\n";
    cout<<i1<<endl<<i2;
    return 0;
}
