#include<stdio.h>
int main(){
int evensum=0,oddsum=0;
for(int i=1;i<=100;i++){
    if(i%2==0)
        evensum+=i;
    else
        oddsum+=i;
}
printf("The sum of even are %d and the sum of odd are %d",evensum,oddsum);
return 0;
}
