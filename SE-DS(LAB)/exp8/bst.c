#include<stdio.h>
#include<malloc.h>
struct node
{
    int info;
    struct node *lchild;
    struct node *rchild;
   // bool lthread;
   // bool rthread;
};
typedef struct node node;

void bst_insert(int);
// void bst_del(int);
void displayPre(node*);
void displayPost(node*);
void displayIn(node*);
void minTerm();
void maxTerm();
void search(int);

node *root;

int main()
{
    int c;
    int ikey;
    while(c!=9)
    {
        printf("\n\n1.Insert      2.Delete        3.Display preorder      4.Search\n5.Display postorder     6.Display Inorder\n7.Min Term      8.Max Term\n9.Exit\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:{
                printf("Enter the value of ikey\n");
                scanf("%d",&ikey);
                bst_insert(ikey);
            }break;
            case 2:{
                printf("Enter the value to be deleted\n");
                scanf("%d",&ikey);
                // bst_del(ikey);
            }break;
            case 3:{
                if(root==NULL)
                    printf("The binary search tree is empty\n");
                else
                    displayPre(root);
            }break;
            case 4:{
                printf("Enter the ikey to be searched\n");
                scanf("%d",&ikey);
                search(ikey);
            }break;
            case 5:{
                if(root==NULL)
                    printf("The binary search tree is empty\n");
                else
                    displayPost(root);
            }break;
            case 6:{
                if(root==NULL)
                    printf("The binary search tree is empty\n");
                else
                    displayIn(root);
            }break;
            case 7:{
                minTerm();
            }break;
            case 8:{
                maxTerm();
            }break;
            case 9:{
                printf("Exiting......\n");
            }
        }
    }

    return 0;
}

void displayPre(node *ptr)          //displays the pre order traversal
{
    if(ptr==NULL)
        return;
    printf("%d    ",ptr->info);
    displayPre(ptr->lchild);
    displayPre(ptr->rchild);
}

void displayIn(node *ptr)      //displays the inorder traversal
{
    if(ptr==NULL)
        return;
    displayIn(ptr->lchild);
    printf("%d    ",ptr->info);
    displayIn(ptr->rchild);
}

void displayPost(node *ptr)     //displays the post order traversal
{
    if(ptr==NULL)
        return;
    displayPost(ptr->lchild);
    displayPost(ptr->rchild);
    printf("%d    ",ptr->info);
}

void minTerm()   //prints the min term
{
    if(root==NULL)
    {
        printf("The binary tree is empty\n");
        return;
    }
    else
    {
        node *ptr=root;
        while(ptr->lchild!=NULL)
        {
            ptr=ptr->lchild;
        }
        printf("%d is the min term of the binary tree\n",ptr->info);
        return;
    }
}
void maxTerm()         //prints the max term
{
    if(root==NULL)
    {
        printf("The binary tree is empty\n");
        return;
    }
    else
    {
        node *ptr=root;
        while(ptr->rchild!=NULL)
        {
            ptr=ptr->rchild;
        }
        printf("%d is the max term of the binary tree\n",ptr->info);
        return;
    }
}


void bst_insert(int ikey)      //inserts the nodes in the binary tree
{
    node *tmp;
    node *ptr;
    tmp=(node*)malloc(sizeof(node));
    tmp->info=ikey;
    tmp->lchild=NULL;
    tmp->rchild=NULL;
   // tmp->lthread=false;
   // tmp->rthread=false;


    //when tree is empty
    if(root==NULL)
    {
        root=tmp;
        return;
    }
    //otherwise
    else
    {
        ptr=root;
        while(ptr!=NULL)
        {
            if(ptr->info==ikey)
                {
                    printf("%d already exists\n",ikey);
                    return;
                }
            if(ikey<ptr->info)
            {
                if(ptr->lchild==NULL)
                {
                    ptr->lchild=tmp;
                    printf("%d has been inserted \n",ikey);
                    return;
                }
                ptr=ptr->lchild;
            }
            else if(ikey>ptr->info)
            {
                if(ptr->rchild==NULL)
                {
                    ptr->rchild=tmp;
                    printf("%d has been inserted \n",ikey);
                    return;
                }
                ptr=ptr->rchild;
            }
        }
        return;
    }

}

void search(int ikey) //used to find an element in the binary tree
{
    node *ptr;
    int count=0;
    if(root==NULL)  //if no nodes exist
    {
        printf("The binary tree is empty\n");
        return;
    }
    else        //if nodes exist
    {
        ptr=root;
        while(ptr!=NULL)
        {
            if(ptr->info==ikey)
            {
                printf("%d is found after %d iteration(s)\n",ikey,count);
                return;
            }
            else
            {
                if(ikey<ptr->info)
                {
                    ptr=ptr->lchild;
                }
                else if(ikey>ptr->info)
                {
                    ptr=ptr->rchild;
                }
                count++;
            }
        }
        printf("%d is not found the in binary tree\n",ikey);
    }
}
