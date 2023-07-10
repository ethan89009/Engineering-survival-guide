#include<iostream>
using namespace std;
class calculator
{
    int a,b;
public:
    int add(){return a+b;}
    int subtract(){return a-b;}
    int mul(){return a*b;}
    float div(){return a/b;}
    void setNumbers(int num1=0,int num2=0){
        a=num1;
        b=num2;
    }
};
int main(){
    calculator c;
    int a,b,o;
    cout<<"Enter two numbers "<<endl;
    cin>>a>>b;
    c.setNumbers(a,b);
    cout<<"Enter the operation"<<endl<<"1.add 2.sub 3.mul 4.div"<<endl;
    cin>>o;

    switch(o){
        case 1:cout<<c.add()<<endl;break;
        case 2:cout<<c.subtract()<<endl;break;
        case 3:cout<<c.mul()<<endl;break;
        case 4:cout<<c.div()<<endl;break;
    }
    return 0;
}
