//class to calaculate salary details
#include<iostream>
#include "payslip.h"
using namespace std;
using namespace payslip;

int main()
{
    employee e[20];
    payscale p[20];
    int n,i,id,basic,hra,ta,da,deduc;
    string name;
    cout<<"Enter the number of employees"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter Name , id , basic pay , hra ,ta , da and deduction of employee"<<endl;
        cin>>name>>id>>basic>>hra>>ta>>da>>deduc;
        e[i].setNameAndId(name,id);
        p[i].setPayscale(hra,ta,da,basic,deduc);
        p[i].calcGradePay();
    }
    for(i=0;i<n;i++){
        cout<<"Employee:"<<e[i].getName()<<" ID:"<<e[i].getId()<<endl;
        cout<<"Salary details:"<<endl;
        cout<<"HRA:"<<p[i].getHra()<<" TA:"<<p[i].getTa()<<" DA:"<<p[i].getDa()<<endl<<"Basic Pay:"<<p[i].getBasicPay()<<" Deduction:"<<p[i].getDeduc()<<endl;
        cout<<"Grade Pay:"<<p[i].getGradePay();
    }
    return 0;
}

