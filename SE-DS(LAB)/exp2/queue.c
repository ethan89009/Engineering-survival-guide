//To implement queue in c
//21co24 ETHAN MENEZES
#include <stdio.h>
int rear=-1;
int front=-1;
int arr[5];
int MAX=5;
//functions

void qinsert(int);
void qdelete();
void qdisplay();
int isEmpty();
int isFull();
void peek();



int main()
{
   int x;
   int temp;
   do{
       printf("1.Insert  2.Delete  3.Display 4.Peek 8.EXIT\n");
       scanf("%d",&x);
       switch(x)
       {
           case 1:printf("Enter the number to be inserted");
                  scanf("%d",&temp);
                  qinsert(temp);break;
           case 2:qdelete();break;
           case 3:qdisplay();break;
           case 4:peek();break;
           case 8:printf("exiting \n");break;
       }
    }while(x!=8);
   return 0;
}

void qinsert(int elem)
{   if(isFull())
    {
        printf("Queue has overflown!\n");
    }
    else{
        if(front==-1)   //checks for
            {
                front+=1;
            }
            rear+=1;
            arr[rear]=elem;
        }
}
int isFull()
{
    if(rear==MAX-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty()
{
    if(front>rear||front==-1)
    {
        return 1;
    }
    return 0;
}
void qdelete()
{
    int temp;
    if(isEmpty())
    {
        printf("Queue underflow!\n");
    }
    else
    {
        temp=arr[front];
        printf("Removing %d from the queue\n",temp);
        front+=1;
    }
}
void qdisplay()
{
    if(isEmpty())
    {
        printf("Queue underflow\n");
    }
    else
    {
        printf("The elements are\n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d\t",arr[i]);
        }
        printf("\n");
    }
}
void peek(){
    if(isEmpty())
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("The peek value is %d\n",arr[front]);
    }
}
