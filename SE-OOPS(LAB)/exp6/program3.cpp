#include<iostream>
#include<string>
using namespace std;
string concat(string,string);// to concatenate two strings (a)

void substring(string,string);//to find a substring (b)

string toLowerCase(string);  //to lower and to upper (d)
string toUpperCase(string);

void splitString(string,int); //to split a string


int main()
{
    string str1,str2;
    int pos;
    cout<<"Enter two string to concatenate \n"<<endl;  //to concatenate two strings
    getline(cin,str1);
    getline(cin,str2);
    str1=concat(str1,str2);
    cout<<"The concatenated string is\n"<<str1<<endl;

    cout<<"Enter string 1\n"<<endl;
    getline(cin,str1);
    cout<<"Enter the substring to find in string 1"<<endl;  //to find substring
    getline(cin,str2);
    substring(str1,str2);

    cout<<"Enter a string to split in to two\n";  //to split a string
    getline(cin,str1);
    cout<<"Enter the position to split\n";
    cin>>pos;
    splitString(str1,pos);

    cout<<"Enter a string to upper case it\n"<<endl; //to upper case
    getchar();
    getline(cin,str1);
    str1=toUpperCase(str1);
    cout<<"the updated string is : "<<str1<<endl;

    cout<<"Enter a string to lower case it\n"<<endl;   //to lower case
    getline(cin,str1);
    str1=toLowerCase(str1);
    cout<<"the updated string is : "<<str1<<endl;
    return 0;
}
string concat(string str1,string str2)
{
    return str1+str2;
}
void substring(string str1,string str2)
{
    int i=0,j=0;
    while(i<str1.length())
    {
        j=0;
        if(str1[i]==str2[j])
        {
            int k=i;
            k++;
            j++;
            while(j<str2.length()&&k<str1.length())
            {
                if(str1[k]==str2[j])
                {
                    k++;
                    j++;
                }
            }
            if(j==str2.length())
            {
                cout<<"The substring is found at "<<i+1<<endl;
                return;
            }
        }
        i++;
    }
    cout<<"Substring entered is not found in the string 1\n"<<endl;
    return;
}
string toUpperCase(string str1)
{
    for(int i=0;i<str1.length();i++)
    {
        if(str1[i]>=97)
        {
            str1[i]=str1[i]-32;
        }
    }
    return str1;
}
string toLowerCase(string str1)
{
    for(int i=0;i<str1.length();i++)
    {
        if(str1[i]>=65&&str1[i]<97)
        {
            str1[i]=str1[i]+32;
        }
    }
    return str1;
}

void splitString(string str,int pos)
{
    char a;
    if(pos<=str.length())
    {
        cout<<"String 1:";
    for(int i=0;i<pos;i++)
    {
      cout<<str[i];
    }
    cout<<"\n";
    cout<<"String 2:";
    for(int i=pos;i<str.length();i++)
    {
        cout<<str[i];
    }
    cout<<"\n";
    return;
    }
    cout<<"The position does not exist\n";
}
