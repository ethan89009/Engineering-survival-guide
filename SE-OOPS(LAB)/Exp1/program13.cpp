//find the minimum max and average of array
#include <iostream>
using namespace std;
int main() {
    int size,min,max,sum=0,average,array[20],i;
    cout<<"Enter the size of the array \n";
    cin>>size;
    cout<<"Enter the elements of the array\n";
    for(i=0;i<size;i++){
        cin>>array[i];
        sum=sum+array[i];
    }
    average=sum/size;
    min=max=array[0];
    for(i=1;i<size;i++){
        if(array[i]<min){
            min=array[i];
        }
        else if(array[i]>=max){
            max=array[i];
        }
    }
    cout<<"The minimum is "<<min<<"The maximum is "<<max<<"The the average is "<<average<<endl;
    return 0;
}
