#include<stdio.h>
int main(){
char character;
printf("Enter the input");
scanf("%c",&character);
if((character>=65)&&(character<=90)||(character>=97)&&(character<=122)){
printf("Its a character");
}else if((character>=48)&&(character<=57)){
printf("Its a digit");
}
return 0;
}
