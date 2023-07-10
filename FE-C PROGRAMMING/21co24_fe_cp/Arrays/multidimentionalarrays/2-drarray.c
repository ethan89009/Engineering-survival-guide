#include<stdio.h>
int main(){
    int a[2][2],i,j;
    printf("Enter the element of the array");
     for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        scanf("%d",&a[i][j]);

     for(i=0;i<2;i++)
       {

        for(j=0;j<2;j++)
       printf("%d \t",a[i][j]);
       printf("\n");
       }
return 0;
}
