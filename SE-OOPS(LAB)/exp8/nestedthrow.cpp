#include<iostream>
using namespace std;
int main()
{
    try
    {
        try
        {
            throw 20;
        }
        catch(int x)
        {
            cout<<"Caught by inner catch block\n";
            throw;
        }
    }
    catch(int n1)
    {
        cout<<"Rethrown exception caught\n";
    }
    return 0;
}
