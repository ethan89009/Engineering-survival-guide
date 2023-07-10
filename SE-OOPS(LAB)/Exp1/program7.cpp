#include<iostream>
#include "cal.h" //user defined header file
using namespace std;
using namespace calculator;
int main(){
    int a=6,b=9;
    cout<<"add :"<<add(a,b)<<endl;
    cout<<"sub :"<<sub(a,b)<<endl;
    cout<<"mul :"<<mul(a,b)<<endl;
    cout<<"div :"<<div(a,b)<<endl;
return 0;
}
