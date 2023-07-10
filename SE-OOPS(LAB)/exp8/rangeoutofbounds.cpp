#include<iostream>
using namespace std;
int main()
{
    int x;
    try
    {
        cout<<"Enter a number \n";
        cin>>x;
        if(x<1||x>99)
        {
            throw x;
        }
        cout<<"The number you entered is "<<x<<"\n";
    }
    catch(int x)
    {
        cout<<"The number you entered is out of the range of the 1-99\n";
    }
    return 0;
}
