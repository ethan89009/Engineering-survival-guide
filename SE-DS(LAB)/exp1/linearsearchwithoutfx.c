//write a c program to implement linear search
//Ethan Menezes 21co24
#include<stdio.h>

int main()
{
int array[20],size,found=0,number;       //variable declaration
printf("Enter the size of array \n");    //accepting size from user
scanf("%d",&size);
printf("Enter the elements \n");
for(int i=0;i<size;i++)
{
    scanf("%d",&array[i]);   //accepting elements from the user
}

printf("Enter the element to be found \n");
scanf("%d",&number);

for(int i=0;i<size;i++)
{      //logic to find if the umber is present or not
    if (number==array[i])
    {
        printf("found the element %d at location %d",number,i+1);
        found=1;
        break;
    }
}
if(!found)
    printf("Element not found\n");

return 0;
}



