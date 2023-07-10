//to display the percentage and grade of student based on marks he has obtained in 3 sub out of 100
#include<iostream>
#include "grade.h"
using namespace std;
using namespace grade;
int main(){
int marks[3];
float percen;
cout<<"Enter the 3 subject marks in the console \n";
for (int i=0;i<3;i++){
    cin>>marks[i];
}
percen=percentage(marks,3);
gradeofstudent(percen);
return 0;
}
