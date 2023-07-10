#include<iostream>
#include<string>
#include <typeinfo>
using namespace std;
void enterNum(double*,double*);
int main()
{
    double num1,num2;
    try
    {
       enterNum(&num1,&num2);
       try
       {
           if(num2==3)
           {
               throw 'error';
           }
           cout<<"num1/3-num2="<<num1/3-num2<<endl;
       }
       catch(string)
       {
           cout<<"Divide by zero error\n";
       }
    }
    catch(double)
    {
        cout<<"The entered number is not in the correct format\n";
    }
    return 0;
}

void enterNum(double *num1,double *num2)
{
    cout<<"Enter num1\n";
    cin>>*num1;
    cout<<"Enter num2\n";
    cin>>*num2;
    const type_info& t1=typeid(*num1);
    const type_info& t2=typeid(*num2);
    try{
    if(t1!=t2)
    {
        throw *num1;
    }
    }
    catch(double)
    {
        throw num1;
    }
}

