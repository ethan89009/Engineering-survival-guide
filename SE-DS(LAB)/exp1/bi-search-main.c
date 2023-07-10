//21co24 Binary search implemented in the main program
#include<stdio.h>
int main(){
        int low,high,mid,arr[20],n,x;
        printf("Enter the size of the array\n");
        scanf("%d",&n);
        printf("Enter the elements in sorted order\n");  //accepts the elements into the array
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        printf("The elements entered are\n"); //displays the entered elements
        for(int i=0;i<=n-1;i++){
            printf("%d\t",arr[i]);
        }
        low=0;
        high=n-1;
        printf("Enter the element to be searched\n");   //element to be searched
        scanf("%d",&x);
        while(low<=high)    //loop to find the element to be searched
        {
            mid=(low+high)/2;
                if(arr[mid]==x){
                    printf("Found %d at location %d",x,mid+1);
                    break;
                }
                else if(arr[mid]>x){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }

        }
        if(low>high){
                printf("Not found!");
        }
        return 0;
}
