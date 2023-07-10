//21co24 Ethan Menezes
//stack implementation in c
#include<stdio.h>
void pop(int* ,int []);
void push(int x,int,int*,int []);
int isFull(int ,int );
int isEmpty(int);
void peek(int,int []);
void display(int ,int []);
int main(){
    int c,a[10],size,top=-1,elem;
    printf("Enter the size of the stack\n");
    scanf("%d",&size);
    do{          //menu driven program using switch
        printf("1.Push  2.Pop  3.Display  4.Peek  5.Exit\n");
        scanf("%d",&c);
        switch(c){
            case 1:printf("Enter the element to be pushed");
                   scanf("%d",&elem);
                   push(elem,size,&top,a);
                   break;
            case 2:pop(&top,a);
                   break;
            case 3:display(top,a);break;
            case 4:peek(top,a);break;
            case 5:printf("Exiting....");break;
            default:printf("Invalid option !\n");
        }
    }while(c!=5);

    return 0;
}
int isFull(int top,int size){     //checks if stack is full or not
    if(top==size-1){
    return 1;
    }
    return 0;
}
int isEmpty(int top){          //checks if the stack is empty or not
    return (top==-1)?1:0;
}


void pop(int *top,int arr[]){        // pops element from stack
       int elem;
    if(isEmpty(*top)){
        printf("The stack is empty\n");
    }
    else{
        elem=arr[*top];
        *top=*top-1;
        printf("Element %d has been popped",elem);
    }
}
void push(int x,int size,int *top,int arr[]){     //pushes element into stack
    if(isFull(*top,size)){
        printf("Stack overflow\n");
    }else{
        *top=*top+1;
        arr[*top]=x;
        printf("Element %d has been inserted\n",x);
    }
}
void display(int top, int arr[]){       //display the entire stack
    if(isEmpty(top)){
        printf("The stack is empty\n");
    }else{
        printf("The elements of the stack are \n");
        for(int i=0;i<=top;i++){
        printf("%d\t",arr[i]);
        }
        printf("\n");
    }
}
void peek(int top,int arr[]){      //prints the peek element
    if(isEmpty(top)){
        printf("The stack is empty\n");
    }else{
        printf("The peek element is :%d\n",arr[top]);
    }
}
