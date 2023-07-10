#include<stdio.h>
struct cars
{
    int price;
    char name[10];
};
typedef struct cars car;
int main()
{
    car c[10];       //declaration
    int n;
    printf("Enter the size of the array of cars\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the name and price of the car %d\n",i+1);         //accepts the cars in the array
        scanf("%s %d",&c[i].name,&c[i].price);
    }
    for(int i=0;i<n;i++)
    {
        printf("Car %d: \nName:%s\tPrice:%d\n ",i+1,c[i].name,c[i].price);      //prints the cars in the array
    }
    return 0;
}
