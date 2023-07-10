//function overloading
#include<iostream>
using namespace std;
void add(int a, int b, int c){cout<<"sum = "<<(a+b+c)<<endl;}
void add(double a, double b){cout<<"sum = "<<(a+b)<<endl;}
void add(int a, int b){cout<<"sum = "<<(a+b)<<endl;}
int main(){
    int a1,b1,c1;
    double a2,b2;
    cout<<"Enter 3 integers "<<endl;
    cin>>a1>>b1>>c1;
    cout<<"Enter the 2 double numbers"<<endl;
    cin>>a2>>b2;
    cout<<"The sum 2 of the integers are" <<endl;
    add(a1,b1);
    cout<<"The sum 2 of the double are" <<endl;
    add(a2,b2);
    cout<<"The sum 3 of the integers are" <<endl;
    add(a1,b1,c1);
    return 0;
}
