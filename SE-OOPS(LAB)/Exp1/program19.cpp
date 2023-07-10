//to find the area of triangle,circle,square and rectangle
#include<iostream>
using namespace std;
int main()
{
    int a,b,h,sq=0,re=0,r,s;
    float tr=0,ci=0;
    cout<<"Enter an option to find Area of 1.Triangle \n2.Circle \n3.Square \n4.Rectangle \n";
    cin>>a;
    do
    {
        switch(a)
    {
        case 1: cout<<"Enter base and height value\n";
        cin>>b>>h;
        tr=(0.5*b*h);
        cout<<"Area of triangle is "<<tr<<endl;
        break;

        case 2: cout<<"Enter Radius value\n";
        cin>>r;
        ci=(3.14*(r*r));
        cout<<"Area of Circle is "<<ci<<endl;
        break;

        case 3: cout<<"Enter Side value\n";
        cin>>s;
        sq=(s*s);
        cout<<"Area of Square is "<<sq<<endl;
        break;

        case 4: cout<<"Enter breadth and length value\n";
        cin>>b>>h;
        re=(b*h);
        cout<<"Area of Rectangle is "<<re<<endl;
        break;
        default: cout<<"Incorrect input"<<endl;
    }
    return 0;
}