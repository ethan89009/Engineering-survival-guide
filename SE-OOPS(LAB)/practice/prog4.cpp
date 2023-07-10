#include<iostream>
using namespace std;
int main()
{
    int marks[6],sum=0;
    double per;
    cout<<"Enter the marks scored in each subject "<<endl;
    for(int i=0;i<6;i++)
    {
        cin>>marks[i];
        sum+=marks[i];
    }
    per=float(sum/6);
    cout<<"The percentage is : "<<per<<endl;
    if(per>=80)
    {
        cout<<"A grade"<<endl;
    }
    else if(per<80&&per>=70)
    {
        cout<<"B grade"<<endl;
    }
    else if(per<70&&per>=60)
    {
        cout<<"C grade"<<endl;
    }
    else if(per<60&&per>=50)
    {
        cout<<"D grade"<<endl;
    }
    else if(per<50&&per>=40)
    {
        cout<<"E grade "<<endl;
    }
    else
    {
        cout<<"F"<<endl;
    }
    return 0;
}
