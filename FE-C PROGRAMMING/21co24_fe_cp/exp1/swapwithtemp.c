#include<stdio.h>
int main(){
int a,b,temp;
printf("Enter the two numbers \n");
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("\n The two numbers are %d %d\n",a,b);
return 0;
}

