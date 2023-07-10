#include<stdio.h>
int main(){
int num,n,i=1;
printf("Enter the number for the multiplication table and also the value of n\n");
scanf("%d %d",&num,&n);
while(i<=n){
    printf("%d * %d = %d\n",num,i,num*i);
    i++;
}
return 0;

}
