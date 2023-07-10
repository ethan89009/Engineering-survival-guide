//factorial of a number
#include<iostream>
#include "cal.h"
using namespace std;
using namespace calculator;
int main(){
    int n,fact=1,i=1;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    while(i<=n){
        fact=mul(fact,i);
        i++;
    }
    cout<<"Factorial is :"<<fact<<endl;
return 0;
}
