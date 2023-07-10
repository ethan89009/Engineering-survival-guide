#include<stdio.h>
int main(){
long unsigned int fact=1;
int num;
printf("Enter the value of num\n");
scanf("%d",&num);
while(num>0){
fact=fact*num;
num--;
}
printf("The factorial of the number is \n%ld",fact);
return 0;

}

