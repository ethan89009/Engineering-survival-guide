//to calculate the area of the circle and triangle
#include<iostream>
using namespace std;
double area(int radius){return 3.14*radius*radius;}
double area(int base,int height){return 0.5*base*height;}
int main(){
    int base,rad,height;
    cout<<"Enter the radius of the circle"<<endl;
    cin>>rad;
    cout<<"Enter the base and height of the triangle"<<endl;
    cin>>base>>height;
    cout<<"The area of the circle is = "<<area(rad)<<endl;
    cout<<"The area of the triangle is = "<<area(base,height)<<endl;
    return 0;
}

