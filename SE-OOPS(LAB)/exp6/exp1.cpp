#include<iostream>
#include<string>
using namespace std;
class str
{
    string val;
    int white=0;
    int tabs=0;
    int newL=0;
public:
    str()
    {
        string tmp;
        cout<<"Enter the string value\n";
        getline(cin,tmp);
        val=tmp;
    }
    str(string val)
    {
        this->val=val;
    }
    void calc()
    {
        for(int i=0;i<val.length();i++)
        {
           if(val[i]=='\t')
            tabs++;
           if(val[i]=='\n')
            newL++;
           if(val[i]==' ')
            white++;
        }
        cout<<"Whitespaces="<<white<<endl<<"New Line characters ="<<newL<<endl<<"Tabs="<<tabs<<endl;

    }

};
int main()
{

    str s1("hello      world\n");
    str s2;
    cout<<"s1 string:"<<endl;
    s1.calc();
    cout<<"s2 string"<<endl;
    s2.calc();
    return 0;
}
