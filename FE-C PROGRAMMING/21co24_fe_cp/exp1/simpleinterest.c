#include<stdio.h>
int main(){
int time;
float principle ,rate,simple;
printf("Enter the time principle and rate \n");
scanf("%d %f %f",&time,&principle,&rate);
simple=time*principle*rate;
printf("The simple interest is=%f",simple);
return 0;

}

