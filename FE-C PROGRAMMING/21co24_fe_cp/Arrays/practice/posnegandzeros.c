#include<stdio.h>
int main()
{
    int x[100],i,n,pos=0,neg=0,zeros=0;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
    printf("Enter :\n");
    scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++)
	{
	    if(x[i]>0)
            pos++;
        else if(x[i]<0)
            neg++;
        else
            zeros++;
	}
	printf("The number of Positive numbers are %d\nThe number of negative numbers are %d\nThe number of zeros are %d",pos,neg,zeros);



return 0;
}


