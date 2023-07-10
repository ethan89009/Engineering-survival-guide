
#include<stdio.h>
int main(){
int side1,side2,area,perimeter;
printf("Enter the two sides of the rectangle \n");
scanf("%d %d",&side1,&side2);
area=side1*side2;
perimeter=2*(side1+side2);
printf("The area and perimeter of the rectangle is %d and %d",area,perimeter);


return 0;
}
