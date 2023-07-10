#include<iostream>
using namespace std;
void bubble(int[],int);
void binaryS(int[],int,int);
int main()
{
    int arr[50],n,elem;
    cout<<"Enter the array size\n";
    cin>>n;
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to be found\n";
    cin>>elem;
    bubble(arr,n);
    binaryS(arr,n,elem);
    return 0;
}
void binaryS(int arr[],int n,int elem)
{
    int low;
    int mid;
    int high;
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==elem)
        {
            cout<<"Element found at location "<<mid+1<<endl;
            return;
        }
        else
        {
            if(arr[mid]>elem)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
    }
    cout<<"Element is not found in the array\n";
    return;
}
void bubble(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
    cout<<"The sorted array is \n"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    return;
}
