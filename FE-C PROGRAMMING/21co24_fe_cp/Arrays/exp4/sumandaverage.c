#include<stdio.h>
int main()
{
    int x[100],i,n,sum=0;float avg;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
    printf("Enter :\n");
    scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++)
	sum=sum+x[i];

	avg=(float)sum/n;
	printf("The sum of the array is : %d  and average is : %f",sum,avg);

return 0;
}


