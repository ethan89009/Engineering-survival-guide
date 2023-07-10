#include<stdio.h>
int
main ()
{
  int a[100],i,n,temp;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
    printf("Enter :\n");
    scanf("%d",&a[i]);
	}
	for(int i=0;i<n/2;i++)
	{
	    temp=a[i];
	    a[i]=a[n-1-i];
	    a[n-1-i]=temp;
	}
	for(i=0;i<=n-1;i++){
    printf("%d\t",a[i]);
	}

return 0;
}


