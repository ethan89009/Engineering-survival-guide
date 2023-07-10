#include<stdio.h>
#include<string.h>
int main(){
char a[20],b[20],c[20];
printf("Enter two strings\n");
gets(a);
gets(b);
printf("The size of string a is %d, and b is %d \n",strlen(a),strlen(b));
strcpy(a,b);
printf("The copied string of a is \n");
puts(a);
strcat(a,b);
printf("The new concatinated string of a is \n");
puts(a);
strrev(a);
printf("The reversed array of a is\n");
puts(a);

return 0;

}
