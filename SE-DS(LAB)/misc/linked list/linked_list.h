#include<stdio.h>
#include<malloc.h>

struct node
{
    int value;
    struct node *next;
};
typedef struct node node;

node* display(node *start)
{
    if(start==NULL)
    {
        printf("The stack is empty\n");
        return start;
    }
    node *p;
    p=start;
    printf("The list is:\n");
    while(p!=NULL)
    {
        printf("%d\t",p->value);
        p=p->next;
    }
    printf("\n");
    return start;
}

node* insert_bg(node *start,int value)
{
    node *tmp;
    tmp=(node*)malloc(sizeof(node));
    tmp->value=value;
    tmp->next=NULL;
    if(start==NULL)
    {
        start=tmp;
        return start;
    }
    else
    {
        tmp->next=start;
        start=tmp;
        return start;
    }
}

node* insert_end(node *start,int value)
{
    node *tmp;
    tmp=(node*)malloc(sizeof(node));
    tmp->value=value;
    tmp->next=NULL;
    if(start==NULL)
    {
        start=tmp;
        return start;
    }
    else
    {
        node *ptr;
        ptr=start;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=tmp;
        return start;

    }
}

node* del_bg(node *start)
{
    if(start==NULL)
    {
        printf("The list is empty\n");
        return start;
    }
    else
    {
        node *ptr;
        ptr=start;
        start=start->next;
        printf("%d is popped out\n",ptr->value);
        free(ptr);
        return start;
    }
}

node* del_end(node *start)
{
    if(start==NULL)
    {
        printf("The list is empty\n");
        return start;
    }
    if(start->next==NULL)
    {
        printf("%d is popped of\n",start->value);
        start=NULL;
        return start;
    }
    else
    {
        node *ptr;
        ptr=start;
        while(ptr->next->next!=NULL)
        {
            ptr=ptr->next;
        }
        node *tmp;
        tmp=ptr->next;
        ptr->next=tmp->next;
        printf("%d is popped of\n",tmp->value);
        free(tmp);
        return start;
    }
}
node* insert_pos(node* start,int value,int pos)
{
    node *tmp;
    tmp=(node*)malloc(sizeof(node));
    tmp->value=value;
    tmp->next=NULL;
    if(start==NULL&&pos!=1)
    {
        printf("No such position available\n");
        return start;
    }
    if(pos==1)
    {
        tmp->next=start;
        start=tmp;
        return start;
    }
    else
    {
        node *p;
        p=start;
        for(int i=1;i<pos-1;i++)
        {
            p=p->next;
            if(p==NULL)
            {
                printf("No such position available\n");
                return start;
            }
        }
        tmp->next=p->next;
        p->next=tmp;
        return start;
    }
}
