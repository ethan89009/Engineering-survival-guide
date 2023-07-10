//to print multiplication table
#include<iostream>
#include "cal.h"
using namespace std;
int main(){
  int x,n;
  cout<<"Enter the number and range"<<endl;
  cin>>x>>n;
  for(int i=1;i<=n;i++){
    cout<<x<<" * "<<i<<"="<<x*i<<endl;
  }

return 0;
}
