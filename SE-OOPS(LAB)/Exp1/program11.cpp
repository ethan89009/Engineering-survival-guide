//find the average of the array
#include<iostream>
#include "cal.h"
#include<math.h>
using namespace std;
using namespace calculator;
int main(){
  int numb[10];
  int sum=0;
  float avg;
  cout<<"Enter the the numbers in the array"<<endl;
  for(int i=0;i<10;i++){
    cin>>numb[i];
    sum=add(sum,numb[i]);
  }
  avg=(sum/10.0);
  cout<<"The the average is "<<endl<<avg;
return 0;
}


