//to calculate the volume of a cube and a  cylinder
#include<iostream>
using namespace std;
double vol(int side){return side*side*side;}
double vol(int rad,int height){return 3.14*rad*rad*height;}
int main(){
    int side,rad,height;
    cout<<"Enter the side of the cube"<<endl;
    cin>>side;
    cout<<"Enter the radius and height of the cylinder"<<endl;
    cin>>rad>>height;
    cout<<"The volume of the cube is = "<<vol(side)<<endl;
    cout<<"The volume of the cylinder is = "<<vol(rad,height)<<endl;
    return 0;
}
