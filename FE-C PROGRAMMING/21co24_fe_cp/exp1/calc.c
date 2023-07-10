#include<stdio.h>
int main(){
int  a,b,sum,product,diff;
float quo;
printf("Enter two numbers to add sub mul and divide\n");
scanf("%d %d",&a,&b);
sum=a+b;
product=a*b;
diff=a-b;
quo=(a/b);
printf("%d \n%d\n%d\n %f ",sum,product,diff,quo);
return 0;

}
