#include<stdio.h>
int rev(int);
int main(){
    int n,revs;
    printf("Enter the number\n");
    scanf("%d",&n);
    revs=rev(n);
    printf("%d",revs);

return 0;
}
int rev(int n){
    int r;
    r=n%10;
if(n==0)
    return 0;
else
    return (r*10+rev(n/10));

}
