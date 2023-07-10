#include<stdio.h>-
struct student
{
    char name[20];
    int age;
};
typedef struct student student;
int main()
{
    student s1;
    printf("Enter the name of the student\n");
    scanf("%s",&s1.name);
    printf("%s",s1.name);
    return 0;
}

