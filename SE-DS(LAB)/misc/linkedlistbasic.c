#include<stdio.h>
#include<malloc.h>
struct node
{
    int value;
    struct node *next;
};
typedef struct node node;

void insert(node *);
void del(node *);
void display(node *);
int main()
{
    node *start;
    start=(node *)malloc(sizeof(node));
    start->next=NULL;
    start->value=9;
    insert(start);
    insert(start);
    display(start);
    return 0;
}

void insert(node *start)
{
    node *tmp;
    int val;
    tmp=(node *)malloc(sizeof(node));
    tmp->next=NULL;
    printf("Enter the value of the node\n");
    scanf("%d",&val);
    tmp->value=val;
    if(start==NULL)
    {
        start=tmp;
        return;
    }
    node *p;
    p=start;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=tmp;
    return;
}




void del(node *start)
{
    if(start==NULL)
    {
        printf("Stack underflow\n");
        return;
    }
    else if(start->next==NULL)
    {
        start=NULL;
        return;
    }
    node *p,*tmp;
    p=start;
    while(p->next->next!=NULL)
    {
        p=p->next;
    }
    tmp=p->next;
    p->next=tmp->next;
    free(tmp);
    return;
}
void display(node *start)
{
    if(start==NULL)
    {
        printf("The stack is empty\n");
        return;
    }
    node *p;
    p=start;
    while(p!=NULL)
    {
        printf("%d\t",p->value);
        p=p->next;
    }
}
