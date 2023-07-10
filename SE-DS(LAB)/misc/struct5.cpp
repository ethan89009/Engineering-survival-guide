#include<stdio.h>
#include<string.h>
struct student           //struct declaration
{
    int age;
    char name[10];
    float per;
};

int main()
{
    struct student a,b;              //structure declaration of the student a and b
    struct student *p;               //pointer declaration
    p=&a;                            //p has address of a

    printf("Enter the age of student a:\n");        //runtime initailisation of student a
    scanf("%d",&p->age);
    printf("Enter the name of student a:\n");
    scanf("%s",&p->name);
    printf("Enter the percentage of student a:\n");
    scanf("%f",&p->per);
    printf("\n\n");

    p=&b;                     //p has address of b

    printf("Enter the age of student b:\n");      //runtime initialisation of student b
    scanf("%d",&p->age);
    printf("Enter the name of student b:\n");
    scanf("%s",&p->name);
    printf("Enter the percentage of student b:\n");
    scanf("%f",&p->per);
    printf("\n");
    p=&a;           //p has address of a

    printf("The name age and percentage of a is :\n%s\n%d\n%f\n",p->name,p->age,p->per);  //displaying the details of student a

    p=&b;           //p has address of b

    printf("\n\nThe name age and percentage of b is :\n%s\n%d\n%f",p->name,p->age,p->per);  //displaying the details of student b

    return 0;
}

