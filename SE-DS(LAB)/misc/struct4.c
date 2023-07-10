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
    a.age=17;
    a.per=78.2;
    strcpy(a.name,"Ethan");        //compile time initialisation of the structure student
    b.age=18;
    b.per=99.9;
    strcpy(b.name,"Niraj");


    printf("The name age and percentage using pointer p is : %s and %d and %f\n",p->name,p->age,p->per);    //printing the student name using pointer

    p=&b;   //pointer now has address of b

    printf("The name age and percentage using pointer p is : %s and %d and %f\n",p->name,p->age,p->per);    //printing the student name using pointer

    return 0;
}
