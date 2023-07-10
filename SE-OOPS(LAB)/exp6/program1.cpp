#include<iostream>
#include<string>
using namespace std;
int main()
{
    string info;
    int newL=0,whiteS=0,tabs=0;
    cout<<"Enter the string \n"<<endl;
    getline(cin,info);
    for(int i=0;i<info.length();i++)
    {
        if(info[i]==' ')
            whiteS++;
        if(info[i]=='\n')
            newL++;
        if(info[i]=='\t')
            tabs++;
    }
    cout<<"The number of tabs = "<<tabs<<endl;
    cout<<"The number of white space characters are = "<<whiteS<<endl;
    cout<<"The number of new line characters are = "<<newL<<endl;
    return 0;
}
