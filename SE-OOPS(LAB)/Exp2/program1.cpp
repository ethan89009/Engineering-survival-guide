//basic implementation of classes
#include <iostream>

using namespace std;

class Number
{
    int arr[10];
    int n;
public:
    void initArray()
    {
        cout<<"Enter the number of elements"<<endl;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

    }
    void addScalar(int x)
    {
        for(int i=0;i<n;i++)
        {
            arr[i]+=x;
        }

    }
    void dispArray()
    {
         for(int i=0;i<n;i++)
        {
           cout<<arr[i]<<"\t";
        }

    }
};


int main()
{
   Number n1;
   n1.initArray();
   n1.addScalar(3);
   n1.dispArray();
   return 0;
}

