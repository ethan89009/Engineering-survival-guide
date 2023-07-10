#include<stdio.h>
int main(){
int a[100][100], b[100][100],c[100][100],r1,c1,r2,c2,i,j,k
printf("Enter the row and columns of first matrix\n");
scanf("%d %d",&r1,c1);
printf("Enter the row and columns of second matrix\n");
scanf("%d %d",&r2,c2);

printf("Enter the elements of the first matrix \n");
for(i=0;i<r1;i++)
for(j=0;j<c1;j++)
scanf("%d",&a[i][j]);

printf("Enter the elements of the second matrix \n");
for(i=0;i<r2;i++)
for(j=0;j<c2;j++)
scanf("%d",&b[i][j]);

if(c1=r2)
{
for(i=0;i<r1;i++)
for(j=0;j<c2;j++){
	c[i][j]=0;
for(k=0;k<c1;k++)
c[i][j]+=a[i][k]*b[k][j];
}
for(i=0;i<r1;i++){
for(j=0;j<c2;j++)
	printf("%d\t",c[i][j]);
	printf("\n");
	}
	}else
	printf("The columns of the first matrix and the rows of the second matrix dont match\n");
return 0;
}
