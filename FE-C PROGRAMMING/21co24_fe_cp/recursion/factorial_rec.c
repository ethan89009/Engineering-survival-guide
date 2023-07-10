#include<stdio.h>
int fact(int );
int main(){
    int n,factorial;
    printf("Enter the number\n");
    scanf("%d",&n);
    factorial=fact(n);
    printf("The factorial is %d",factorialz);
return 0;
}
int fact(int n){
if(n==1)
    return 1;
else
    return (n*fact(n-1));
}
