// to find the mean ,deviation and variance
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int array[20],sum=0,n;
    double mean,variance,deviation,temp=0;
    cout<<"Enter the number of elements";
    cin>>n;
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++){
        cin>>array[i];
        sum=sum+array[i];
    }
    mean=static_cast<double>(sum)/n;
    for(int i=0;i<n;i++){
        temp=temp+(array[i]-mean)*(array[i]-mean);
        
    }
    variance=temp/(n-1);
    deviation=sqrt(temp/n);
    cout<<"The mean is : "<<mean<<endl<<"The variance is :"<<variance<<endl<<"The deviation is :"<<deviation<<endl;
    return 0;
}