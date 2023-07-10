//using struct initialization in c programming
#include<stdio.h>
#include<string.h>
struct student      //structure declaration on student
{
    int rollno;
    char branch[20];
    float per;
};

int main()
{
    struct student s1,s2;               //declaration

    printf("Enter the student details of the student 1\n");     //user input for student 1
    scanf("%d %s %f",&s1.rollno,&s1.branch,&s1.per);

    printf("Enter the student details of the student 2\n");        //user input for student 2
    scanf("%d %s %f",&s2.rollno,&s2.branch,&s2.per);

    printf("student-1 is :\n");                                                 //display student details
    printf("Roll no:%d\tBranch:%s\tPercentage:%f \n",s1.rollno,s1.branch,s1.per);
    printf("student-2 is :\n");
    printf("Roll no:%d\tBranch:%s\tPercentage:%f \n",s2.rollno,s2.branch,s2.per);

    return 0;
}
