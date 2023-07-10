//21co24 Binary search  in c
#include<stdio.h>
void binary(int,int,int,int []);
int main(){
    int low,high,n,x,arr[20];
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    printf("The elements entered are\n");
    for(int i=0;i<=n-1;i++){
        printf("%d\t",arr[i]);
    }
    low=0;
    high=n-1;
    printf("Enter the search element\n");
    scanf("%d",&x);
    binary(low,high,x,arr);
    return 0;
}
void binary(int low,int high,int x,int arr[]){  //function to handle binary search
    int mid=(low+high)/2;
    if(low>high){
        printf("Not found!");
    }
    else{
        if(arr[mid]==x){
            printf("Found %d at location %d",x,mid+1);
        }
        else if(arr[mid]>x){
            binary(low,mid-1,x,arr);
        }
        else{
            binary(mid+1,high,x,arr);
        }
    }
}
