//using default arguments
#include<iostream>
using namespace std;
double areaCircle(double r,double PI=3.14){
    return r*r*PI;
}
double areaTriangle(double b=1, double h=1){
return 0.5*b*h;
}
int main(){
    double rad;
    cout<<"Enter the radius"<<endl;
    cin>>rad;
    cout<<"area of circle ="<<areaCircle(rad)<<endl;
    cout<<"area of triangle = "<<areaTriangle()<<endl;
return 0;
}
