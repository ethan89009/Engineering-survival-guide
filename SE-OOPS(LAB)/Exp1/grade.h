#include<iostream>
using namespace std;
namespace grade
{
int percentage(int marks[],int n){
    float sum=0,percen;
    for(int i=0;i<n;i++)
        sum=sum+marks[i];
    percen=sum/n;
    return percen;
}
void gradeofstudent(float percen){
    if(percen>=70.0){
    cout<<"Percentage is = "<<percen<<"and the grade is A"<<endl;
}
    else if(percen<70.0 && percen>=60.0){
    cout<<"Percentage is = "<<percen<<"and the grade is B"<<endl;
}
    else if(percen>=40 && percen<60){
    cout<<"Percentage is = "<<percen<<"and the grade is C"<<endl;
}
    else{
    cout<<"Percentage is = "<<percen<<"and the grade is F"<<endl;
}
}
}
