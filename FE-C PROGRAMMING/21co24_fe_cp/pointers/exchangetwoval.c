#include<stdio.h>
void swap(int*,int*);
void main(){
int a,b;
printf("Enter the two numbers\n");
scanf("%d %d",&a,&b);
swap(&a,&b);
printf("a=%d and b=%d",a,b);
return 0;
}
void swap(int *x,int *y){
int temp=*x;
*x=*y;
*y=temp;
}
