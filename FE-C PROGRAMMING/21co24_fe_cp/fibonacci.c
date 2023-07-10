#include<stdio.h>
int main()
{
	int a=0,b=1,c=0,n,i=1;
	printf("Enter the value of n");
	scanf("%d",&n);
	while(i<=n){
	printf("%d",c);
	c=a+b;
	a=b;
	b=c;
	i++;
	}
	return 0;
}
