//using else if ladder to display age category
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter age "<<endl;
    cin>>age;
    if(age<=1)
    {
        cout<<"Infant\n";
    }
    else if(age<=4)
    {
        cout<<"Toddler\n";
    }
    else if(age<=12)
    {
        cout<<"Child\n";
    }
    else if(age<=18)
    {
        cout<<"Teenager\n";
    }
    else if(age<=39)
    {
        cout<<"Adult\n";
    }
    else if(age<=59)
    {
        cout<<"Middle age adult\n";
    }
    else
    {
        cout<<"Senior Adult\n";
    }
    return 0;
}