#include<stdio.h>
int sum(int);
int main(){
    int n,sums;
    printf("Enter the number\n");
    scanf("%d",&n);
   do{
    sums=sum(n);
    printf("%d\n",sums);
    n=sums;
    }while(!(sums<10));

    return 0;
}
int sum(int n){
        if(n==0)
        return 0;
        else
        return(n%10+sum(n/10));

}
