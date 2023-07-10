#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    try
    {
        for(int i=0;i<=5;i++)
        {
            if(i==5)
            {
                throw i;
            }
            cout<<arr[i]<<"\t";
        }
    }
    catch(int x)
    {
        cout<<"\nArray out of bounds \n";
    }

    return 0;
}
