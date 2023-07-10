#include<iostream>
using namespace std;
class solid
{
    int radius;
    int height;
public:
    void calcVolCylinder(){
        double vol;
        cout<<"The volume of the cylinder is"<<endl;
        vol=3.14*radius*radius*height;
        cout<<vol<<endl;
    }
    void calcVolCone(){
        double vol;
        cout<<"The volume of a cone is "<<endl;
        vol=0.33*3.14*radius*radius*height;
        cout<<vol<<endl;
    }
    solid(){
        radius=3;
        height=5;
    }
    solid(int radius,int height){
        this->radius=radius;
        this->height=height;
    }
    solid(solid &asolid){
        radius=asolid.radius;
        height=asolid.height;
    }
    int getRadius(){return radius;}
    int getHeigth(){return height;}
};
int main(){
    solid s1,s2(7,9);
    solid s3(s2);
    cout<<"The radius and height of s1 is:"<<s1.getRadius()<<" and "<<s1.getHeigth()<<endl;
    cout<<"The radius and height of s2 is:"<<s2.getRadius()<<" and "<<s2.getHeigth()<<endl;
    cout<<"The radius and height of s3 is:"<<s3.getRadius()<<" and "<<s3.getHeigth()<<endl;

    cout<<"Object s1:"<<endl;
    s1.calcVolCone();
    s1.calcVolCylinder();
    cout<<"Object s2:"<<endl;
    s2.calcVolCone();
    s2.calcVolCylinder();
    cout<<"Object s3:"<<endl;
    s3.calcVolCone();
    s3.calcVolCylinder();

    return 0;
}
