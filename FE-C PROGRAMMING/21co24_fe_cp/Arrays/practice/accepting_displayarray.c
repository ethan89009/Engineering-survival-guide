#include<stdio.h>
int main()
{
int x[10];
int i;
for(i=0;i<(sizeof(x)/sizeof(int));i++)
{
	printf("Enter :\n");
	scanf("%d",&x[i]);
	}
	for(i=0;i<(sizeof(x)/sizeof(int));i++)
{
	printf("%d\t",x[i]);

	}
	
return 0;
}

