#include<stdio.h>
int main(){
int num,d,count=0,sum=0;
printf("Enter the number\n");
scanf("%d",&num);
while(num>0){
    d=num%10;
    sum=sum+d;
    num=num/10;
    count++;
}
printf("The number of digits are %d and the sum of the digits are %d\n",count,sum);
return 0;

}
