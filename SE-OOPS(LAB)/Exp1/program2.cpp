//Percentage of the marks obtained by a student
#include<iostream>
using namespace std;
int main(){
  int marks[5],sum=0;
  float per;
  cout<<"Enter the marks in 5 subjects"<<endl;
  for(int i=0;i<5;i++){
    cin>>marks[i];
    sum=sum+marks[i];
  }
  per=(sum/5);
  cout<<"The percentage is "<<endl<<per;
return 0;
}
