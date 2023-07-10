#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number to be divided by a-x"<<endl;
    cin>>x;
    int a=3;
    try{
        if(x==a)
        {
            throw x;
        }
        else
        {
            cout<<"x/a-x= "<<(float)(x/a-x)<<endl;
        }
    }
    catch(int x)
    {
        cout<<"divide by zero error\n";
    }
    return 0;
}
