#include<iostream>
using namespace std;
class complexnos
{
    int real;
    int imagine;
public:
    complexnos(int rea=0,int ima=0){
        real=rea;
        imagine=ima;
    }
    complexnos(complexnos &c){
        real=c.real;
        imagine=c.imagine;
    }
    void sum(complexnos &c){
        cout<<"Adding the complex numbers:"<<endl;
        cout<<real+c.real<<"+("<<imagine+c.imagine<<")i"<<endl;
    }
    void sub(complexnos c){
        cout<<"Subtracting the complex numbers:"<<endl;
        cout<<real-c.real<<"+("<<imagine-c.imagine<<")i"<<endl;

    }
};
int main(){
    int real,ima;
    cout<<"Enter the real and imaginary part of the complex number"<<endl;
    cin>>real>>ima;
    complexnos c1(real,ima);
    complexnos c2(c1);
    complexnos c3(9,10);
    cout<<"Initialized c3 as real=9 imaginary = 10"<<endl;
    c1.sum(c2);
    c1.sub(c2);
    c2.sum(c3);
    c2.sub(c3);
    return 0;
}
