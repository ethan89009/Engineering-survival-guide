//to use a formula to calculate force experienced by a particle
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double q1,q2,r1,r2,force;
    const double E=8.85,PI=3.14;
    cout<<"Enter the values of q1 q2 r1 and r2\n";
    cin>>q1>>q2>>r1>>r2;
    force=(q1*q2*r2)/(4*PI*E*r1*r1);
    cout<<"The force experienced is :"<<force<<endl;
    
    return 0;
}