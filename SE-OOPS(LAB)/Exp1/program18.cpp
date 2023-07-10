//to check if its a vowel or a consonant
# include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter an alphabet\n";
    cin>>c;
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        cout<<"Alphabet is a vowel "<<endl;
    }
    else
    {
        cout<<"Alphabet is a consonant"<<endl;
    }
    return 0;
}