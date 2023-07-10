#include<stdio.h>
#include "./linked_list.h"

int main(){
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

