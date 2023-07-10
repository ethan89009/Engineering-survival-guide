//Using reference variables
#include<iostream>
using namespace std;
void swapnum(int &a,int &b){
    int temp=b;
    b=a;
    a=temp;
}
void swapnum(double &a,double &b){
    double temp=b;
    b=a;
    a=temp;
}
void swapnum(char &a,char &b){
    char temp=b;
    b=a;
    a=temp;
}
int main()
{
    int a1,b1;
    double a2,b2;
    char a3,b3;
    cout<<"Enter two integers "<<endl;
    cin>>a1>>b1;
    cout<<"Enter the two double "<<endl;
    cin>>a2>>b2;
    cout<<"Enter the two characters "<<endl;
    cin>>a3>>b3;
    cout<<"The value of a1 = "<<a1<<" and b1 ="<<b1<<endl;
    swap(a1,b1);
    cout<<"after swap-> The value of a1 ="<<a1<<" and b1 ="<<b1<<endl;
    cout<<"The value of a2 = "<<a2<<" and b2 ="<<b2<<endl;
    swap(a2,b2);
    cout<<"after swap-> The value of a2 ="<<a2<<" and b2 ="<<b2<<endl;
    cout<<"The value of a3 = "<<a3<<" and b3 ="<<b3<<endl;
    swap(a3,b3);
    cout<<"after swap-> The value of a3 ="<<a3<<" and b3 ="<<b3<<endl;
    return 0;
}
