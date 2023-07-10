#include<stdio.h>
int arr[20],MAX,front=-1,rear=-1;

void cinsert(int);
void cdelete();
void peek();
int isEmpty();
int isFull();
void display();


int main()
{
    int c=0,elem;
    printf("Enter the number of elements in the queue\n");
    scanf("%d",&MAX);
    while(c!=8)
    {
        printf("Enter the operation\n");
        printf("1.Insert  2.Delete  3.Peek  4.Display  8.Exit\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:printf("Enter the element to be inserted\n");
                   scanf("%d",&elem);
                   cinsert(elem);
                   break;
            case 2:cdelete();
                   break;
            case 3:peek();
                   break;
            case 4:display();
                   break;
            case 8:printf("Exiting....\n");
            default :printf("Invalid case select another option\n");
        }
    }

    return 0;
}
void cinsert(int elem)
{
    if(isFull())
    {
        printf("Queue overflow\n");
    }
    else
    {
        if(isEmpty())
        {
            front+=1;
        }
        rear=(rear+1)%(MAX);
        arr[rear]=elem;
    }
}
void cdelete()
{
    if(isEmpty())
    {
        printf("Queue underflow\n");
    }
    else
    {
        int elem=arr[front];
        printf("%d is removed from the queue\n",elem);
        front=(front+1)%(MAX);
    }
}
void peek()
{
    if(isEmpty())
    {
        printf("The queue is empty\n");
    }
    else
    {
        printf("Peek element is %d",arr[front]);
    }
}
void display()
{
    if(isEmpty())
    {
        printf("The queue is empty\n");
    }
    else
    {
        printf("The queue is :\n");
        int i=front;
        do
        {
            printf("%d\t",arr[i]);
            i=(i+1)%(MAX);
        }while(i!=rear+1);
        printf("\n");
    }
}
int isEmpty()
{
    return (front==-1||front==rear+1);
}
int isFull()
{
    return ((rear==MAX-1&&front==0)||front-1==rear);
}
