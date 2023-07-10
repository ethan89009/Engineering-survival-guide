#include<stdio.h>
int main()
{
    int x[100],i,n,small,large;
    printf("Enter the size of the array\n");
       scanf("%d",&n);

    for(i=0;i<n;i++){
    printf("Enter :\n");
    scanf("%d",&x[i]);
	}
	large=small=x[0];
	for(i=1;i<n;i++){
        if(large<x[i])
            large=x[i];
        if(small>x[i])
            small=x[i];
	}
	printf("The largest and smallest number is %d and %d",large,small);


return 0;
}
