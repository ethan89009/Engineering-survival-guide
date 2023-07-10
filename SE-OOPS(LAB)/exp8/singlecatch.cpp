#include<iostream>
using namespace std;

int main()
{
    int a;
    try
    {
        cout<<"Enter a no\n";
        cin>>a;
        if(a>0)
        {
            throw 1;
        }
        else if(a<0)
        {
            throw 1.0;
        }
        else
            throw 'x';
    }
    catch(...)
    {
        if(a>0)
        {
            cout<<"a>0";
        }
        else if(a<0)
        {
            cout<<"a<0";
        }
        else
        {
            cout<<"a=0"<<endl;
        }
    }
    return 0;
}
