//to find the number of spam words
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    string str;
    int spam=0;
    cout<<"Enter a string value "<<endl;
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!=' '&&str[i]!='\n'&&str[i]!='\t')
        {
          char s1[15],s2[15];
          int j=0,k=0,l=0;
          s1[j++]=str[i++];
          while(str[i]!=' '&&i<str.length()){
            s1[j++]=str[i++];
            cout<<s1;
          }
          l=i+1;
            if(str[l]!=' '&&str[l]!='\n'&&str[l]!='\t')
            {
                s2[k++]=str[l++];
                while(str[l]!=' '){
                    s2[k++]=str[l++];
                }
            }
            if(strcmp(s1,s2))
            {
                spam++;
            }

        }
    }
    cout<<"The number of spam words are :"<<spam<<endl;
}
