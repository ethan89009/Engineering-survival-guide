#include<stdio.h>
int main(){
int a[100][100],b[100][100],i,j,r,c;
printf("Enter the value of rows and columns");
scanf("%d %d",&r,&c);
for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);
for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    b[j][i]=a[i][j];

    for(i=0;i<r;i++)
    {for(j=0;j<c;j++)
        printf("%d \t",b[i][j]);
        printf("\n");
    }
    return 0;
}
