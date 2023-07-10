//program to overload array subscript operator ([])
#include<iostream>
#include<stdlib.h>
using namespace std;

class Array
{
    int num[10];
    int siz;
public:
    void setArray()
    {
        cout<<"Enter size of array\n"<<endl;
        cin>>siz;
        for(int i=0;i<siz;i++)
        {
            cin>>num[i];
        }
    }
    int& operator[](int x)
    {
        if(x>=siz)
        {
            cout<<"array out of bounds"<<endl;
            exit(0);
        }
        else{
            return num[x-1];
        }
    }
    void disp()
    {
        for(int i=0;i<siz;i++)
        {
            cout<<num[i]<<endl;
        }
    }

};
int main()
{
    Array a;
    a.setArray();
    int x=a[3];
    cout<<"x= "<<x<<endl;
    a.disp();
    return 0;
}
