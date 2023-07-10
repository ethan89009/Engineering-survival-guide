#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *prev;
    struct node *next;
};
typedef struct node node;

void display(node *);
node *insert_beg(node *,int );
node *insert_end(node *,int );
node *delete_beg(node *);
node *delete_end(node *);
node *insert_pos(node *,int,int);
node *delete_pos(node *,int);
void count(node *);
void search(node *,int);
node *reverse(node *);
int main()
{
    node *start;
    start=NULL;
    int c;
    while(c!=0)
    {
        printf("\n1.Insert at the begining\t2.Insert at the end\n3.Delete from the beginning\t4.Delete from the end\n5.Insert at a position\t6.Delete at position\n7.Count of the list\t8.Search item in the list\n9.Reverse the list\t11.Display list\n0.End\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            {
                int data;
                printf("Enter the value to be inserted in the node\n");
                scanf("%d",&data);
                start=insert_beg(start,data);
            }
            break;
            case 2:
            {
                int data;
                printf("Enter the value to be inserted in the node\n");
                scanf("%d",&data);
                start=insert_end(start,data);
            }
            break;
            case 3:start=delete_beg(start);
            break;
            case 4:start=delete_end(start);
            break;
            case 5:
            {
               /* int data,pos;
                printf("Enter a position and data to be inserted in the list\n");
                scanf("%d %d",&pos,&data);*/
                start=insert_pos(start,5,2);
            }
            break;
            case 6:
            {
                int pos;
                printf("Enter the position to be deleted\n");
                scanf("%d",&pos);
                start=delete_pos(start,pos);
            }break;
            case 7:count(start);break;
            case 8:
            {
                int data;
                printf("Enter the data item to be searched\n");
                scanf("%d",&data);
                search(start,data);
            }
            break;
            case 9:start=reverse(start);break;
            case 11:display(start);
                    break;
            case 0:printf("Exiting");
        }
    }
}
node* insert_beg(node *start,int data)
{
    node *tmp;
    tmp=(node*)malloc(sizeof(node));
    tmp->info=data;
    tmp->next=NULL;
    tmp->prev=NULL;
    if(start==NULL)
    {
        start=tmp;
        printf("%d has been succesfully inserted at the beginning in the list\n",tmp->info);
        return start;
    }
    else
    {
        start->prev=tmp;
        tmp->next=start;
        start=tmp;
        printf("%d has been succesfully inserted at the beginning in the list\n",tmp->info);
        return start;

    }
}
void display(node *start)
{
    if(start==NULL)
    {
        printf("The list is empty\n");
        return;
    }
    else
    {
        node *ptr=start;
        printf("\nNULL<---");
        while(ptr!=NULL)
        {
            printf("%d",ptr->info);
            printf("--->");
            ptr=ptr->next;
        }
        printf("NULL\n\n");
        return;
    }
}
node *insert_end(node *start,int data)
{
    node *tmp;
    tmp=(node*)malloc(sizeof(node));
    tmp->info=data;
    tmp->next=NULL;
    tmp->prev=NULL;
    if(start==NULL)
    {
        start=tmp;
        printf("%d has been succesfully inserted at the end in the list\n",tmp->info);
        return start;
    }
    else
    {
        node *ptr=start;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        tmp->prev=ptr;
        ptr->next=tmp;
        printf("%d has been succesfully inserted at the end in the list\n",tmp->info);
        return start;

    }
}
node *delete_beg(node *start)
{
    node *tmp;
    if(start==NULL)
    {
        printf("The list is empty\n");
        return start;
    }
    else
    {
        if(start->next==NULL)
        {
            tmp=start;
            printf("%d has been deleted from the beginning of the list\n",tmp->info);
            start=NULL;
            free(tmp);
            return start;
        }
        tmp=start;
        start=start->next;
        start->prev=NULL;
        printf("%d has been deleted from the beginning of the list\n",tmp->info);
        free(tmp);
        return start;
    }
}

node *delete_end(node *start)
{
    node *tmp;
    if(start==NULL)
    {
        printf("The list is empty\n");
        return start;
    }
    else
    {
        if(start->next==NULL)
        {
            tmp=start;
            printf("%d has been deleted at the end of the list\n",tmp->info);
            start=NULL;
            free(tmp);
            return start;
        }
        node *ptr=start;
        while(ptr->next->next!=NULL)
        {
            ptr=ptr->next;
        }
        tmp=ptr->next;
        ptr->next=tmp->next;
        printf("%d has been deleted at the end of the list\n",tmp->info);
        free(tmp);
        return start;
    }
}

node *insert_pos(node *start,int data,int pos)
{
    node *tmp;
    tmp=(node*)malloc(sizeof(node));
    tmp->info=data;
    tmp->next=NULL;
    tmp->prev=NULL;
    if(pos==1)
    {
        if(start==NULL)
        {
            start=tmp;
            printf("%d has been inserted at position %d\n",data,pos);
            return start;
        }
        start->prev=tmp;
        tmp->next=start;
        start=tmp;
        printf("%d has been inserted at position %d\n",data,pos);
        return start;
    }
    else
    {
        node *ptr=start;
        int i;
        for(i=1;ptr!=NULL;i++)
        {
           if(i==pos-1)
           {
                if(ptr->next!=NULL)
                {
                    tmp->next=ptr->next;
                    tmp->prev=ptr;
                    tmp->next->prev=tmp;
                    ptr->next=tmp;
                    printf("%d has been inserted at position %d\n",data,pos);
                    return start;
                }
                    ptr->next=tmp;
                    tmp->prev=ptr;
                    printf("%d has been inserted at position %d\n",data,pos);
                    return start;
           }
        }

        printf("Cannot insert at %d position \n",pos);
        return start;
    }
}
node *delete_pos(node *start,int pos)
{
    if(start==NULL)
    {
        printf("The list is empty\n");
        return start;
    }
    else
    {
        if(pos==1)
        {
            if(start->next==NULL)
            {
                 node *tmp;
                 tmp=start;
                 printf("%d has been deleted at position %d\n",tmp->info,pos);
                 start=NULL;
                 free(tmp);
                 return start;
            }
            node *tmp=start;
            start=start->next;
            start->prev=NULL;
            printf("%d has been deleted at position %d\n",tmp->info,pos);
            free(tmp);
            return start;
        }
        node *ptr;
        ptr=start;
        int i;
        for(i=1;ptr->next!=NULL;i++)
        {
            if(i==pos-1)
            {
                node *tmp=ptr->next;
                printf("%d has been deleted at position %d\n",tmp->info,pos);
                ptr->next=tmp->next;
                ptr->next->prev=ptr;
                free(tmp);
                return start;
            }
            ptr=ptr->next;
        }
        if(i==pos&&ptr->next==NULL)
        {
            node *tmp=ptr;
            tmp->prev->next=NULL;
            printf("%d has been deleted at position %d\n",tmp->info,pos);
            free(tmp);
            return start;
        }
        printf("Cannot delete at this position\n");
        return start;
    }
}
void count(node *start)
{
    if(start==NULL)
    {
        printf("List is empty\n");
        return;
    }
    else
    {
        int count=0;
        node *ptr;
        ptr=start;
        while(ptr!=NULL)
        {
            ptr=ptr->next;
            count++;
        }
        printf("The count is %d\n",count);
        return;
    }

}
void search(node *start,int data)
{
    if(start==NULL)
    {
        printf("The list is empty\n");
        return;
    }
    else
    {
        node *ptr;
        ptr=start;
        int pos=1;
        while(ptr!=NULL)
        {
            if(ptr->info==data)
            {
             printf("The element %d is found at location %d\n",data,pos);
             return;
            }
            ptr=ptr->next;
            pos++;
        }
        printf("Element is not found in the list\n");
        return;
    }
}
node *reverse(node *start)
{
    if(start==NULL)
    {
        printf("The list is empty \n");
        return start;
    }
    else
    {
        node *tmp,*nStart;
        node *ptr;
        ptr=start;
        while(ptr!=NULL)
        {
            nStart=ptr;
            tmp=ptr->prev;
            ptr->prev=ptr->next;
            ptr->next=tmp;
            ptr=ptr->prev;
        }
        start=nStart;
        printf("The list has been reversed\n");
        return start;
    }
}
