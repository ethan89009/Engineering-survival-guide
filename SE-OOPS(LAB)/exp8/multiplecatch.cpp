//
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
    catch(int y1)
    {
        cout<<">0";
    }
    catch(char y2)
    {
        cout<<"=0";
    }
    catch(double y3)
    {
        cout<<"<0";
    }
    return 0;
}

