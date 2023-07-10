#include<stdio.h>

void main(){
int a[100],n,i;
int* ptr_arr[100];
printf("Enter the size of the array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
ptr_arr[i]=&a[i];
}
for(i=0;i<n;i++){
printf("%p\t",ptr_arr[i]);
}
}
