#include<stdio.h>
#include<malloc.h>
struct node
{
    int value;
    struct node *next;
};

typedef struct node node;


node* display(node *);
node* insert_bg(node *,int );
node* insert_end(node *,int );
node* del_bg(node *);
node* del_end(node *);
node* insert_pos(node *,int ,int );

int main()

{
    node *start;
    start=NULL;
    int c;
    while(c!=0)
    {
        printf("1.Insert at the begining  2.Insert at the end of the linked list\n3.Display the list  4.Delete at the begining \n5.Delete at the end 6.Insert at position\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            {
                int val;
                printf("Enter the value to be inserted\n");
                scanf("%d",&val);
                start=insert_bg(start,val);
            }
            break;
            case 2:
            {
                int val;
                printf("Enter the value to be inserted\n");
                scanf("%d",&val);
                start=insert_end(start,val);
            }
            break;
            case 3:start=display(start);break;
            case 4:start=del_bg(start);break;
            case 5:start=del_end(start);break;
            case 6:
            {
                int val,pos;
                printf("Enter the value of the node to be inserted\n");
                scanf("%d",&val);
                printf("Enter the position of the node to be inserted\n");
                scanf("%d",&pos);
                start=insert_pos(start,val,pos);
            }
            break;
            case 0:printf("Exiting");
        }
    }
    return 0;
}
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
