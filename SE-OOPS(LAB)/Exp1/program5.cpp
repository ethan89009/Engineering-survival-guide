//making a user defined namespace
#include<iostream>
namespace calculator
{
    int add(int x,int y){
    return x+y;
    }
    int sub(int x,int y){
    return x-y;
    }
    int mul(int x , int y){
    return x*y;
    }
    float div(int x,int y){
    return x/y;
    }
}
using namespace std;
using namespace calculator;

int main(){
    int a=8,b=6;
    cout<<"Addition :"<<add(a,b)<<endl;
    cout<<"Subtraction :"<<sub(a,b)<<endl;
    cout<<"Multiplication :"<<mul(a,b)<<endl;
    cout<<"Division :"<<div(a,b)<<endl;
return 0;
}
