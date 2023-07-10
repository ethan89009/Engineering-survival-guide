//write a c program to implement linear search with functions
//Ethan Menezes 21co24
#include<stdio.h>

void isfound(int [],int); //function declaration

int main()
{
int array[20],size;   //declaring variables
printf("Enter the size of array \n");
scanf("%d",&size);
printf("Enter the elements \n");
for(int i=0;i<size;i++)
{
    scanf("%d",&array[i]);
}
isfound(array,size);//function call
return 0;
}

void isfound(int array[],int size)  //function definition
{
//logic to find the number in the array
int found=0,number;
printf("Enter the element to be found \n");   //Enter the number to be found
scanf("%d",&number);
for(int i=0;i<size;i++)
{
    if (number==array[i])
    {
        printf("found the element %d at location %d",number,i+1);
        found=1;
        break;
    }
}
if(!found)
    printf("Element not found\n");
}
