#include<stdio.h>
int main(){
int basicsalary,otherallowances,hra,gross;

printf("Enter the basic salary other allowances and hra\n");

scanf("%d %d %d",&basicsalary,&otherallowances,&hra);

gross=basicsalary+otherallowances+hra;

printf("The gross salary is = %d",gross);

return 0;

}

