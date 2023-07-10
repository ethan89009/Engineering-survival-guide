#include<stdio.h>
#define pi 3.14
int main(){
int radius;
float area,cir;
printf("Enter the radius of the circle\n");
scanf("%d",&radius);
area=pi*radius*radius;
cir=2*pi*radius;
printf("The the area is %f and the circumference is %f",area,cir);
return 0;
}
