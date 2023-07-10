//21co24 merge sort implementation in c
#include<stdio.h>
void mergesort(int [],int,int);
void merge(int [],int [],int,int,int,int);
void copy(int [],int [],int ,int);
void display(int [],int);
int main()
{
    int n,arr[50];
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements in the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    mergesort(arr,0,n-1);
    display(arr,n);
    return 0;
}
void merge(int a[],int temp[],int l1,int h1,int l2,int h2)  //merges two halfs of array into a temp array
{
    int i=l1;
    int j=l2;
    int k=l1;
    while((i<=h1)&&(j<=h2))
    {
        if(a[i]<=a[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
            temp[k++]=a[j++];
        }
    }
    while(i<=h1)
    {
        temp[k++]=a[i++];
    }
    while(j<=h2)
    {
        temp[k++]=a[j++];
    }
}
void mergesort(int a[],int low,int high)  //applies merge sort recursively
{
    int temp[50];
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,temp,low,mid,mid+1,high);
        copy(a,temp,low,high);
    }
}
void copy(int a[],int temp[],int low,int high) //copies temp array to original array
{
    for(int i=low;i<=high;i++)
    {
        a[i]=temp[i];
    }
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
