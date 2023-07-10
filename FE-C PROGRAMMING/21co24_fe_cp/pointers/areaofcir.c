#include<stdio.h>
void area(float*,float*);
void main(){
float rad;
float ar;
printf("Enter the radius \n");
scanf("%f",&rad);
area(&rad,&ar);
printf("%f is the area",ar);
return 0;
}
void area(float *r,float *area){
*area=*r*(*r)*3.14;
}
