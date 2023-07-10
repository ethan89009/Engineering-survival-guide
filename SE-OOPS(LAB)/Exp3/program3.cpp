//to calculate the gross pay
#include<iostream>
using namespace std;
double grosspay(double hra,double basic,int ta,int da,int deduct)
{
    return (hra+basic+ta+da-deduct);
}
double grosspay(double hra,int cfund,int ta,int deduct)
{
    return (hra+cfund+ta-deduct);
}
int main()
{
    double hra_e,basic,hra_c;
    int ta_e,da_e,deduct_e,cfund,ta_c,deduct_c;
    cout<<"Enter the hra basic pay ta da and deduction of the regular employee"<<endl;
    cin>>hra_e>>basic>>ta_e>>da_e>>deduct_e;
    cout<<"Enter the hra consolidated fund ta and deduction of contract employee"<<endl;
    cin>>hra_c>>cfund>>ta_c>>deduct_c;

    cout<<"The gross pay of the regular employee = "<<grosspay(hra_e,basic,ta_e,da_e,deduct_e)<<endl;

    cout<<"The gross pay of the contract employee = "<<grosspay(hra_c,cfund,ta_c,deduct_c)<<endl;

    return 0;
}
