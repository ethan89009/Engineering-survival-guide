//to check if the number is upper or lower or digit
# include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter a character ";
    cin>>c;
    switch(c)
    {
        case 'A'...'Z': cout<<"uppercase\n";
        break;
        case 'a'...'z': cout<<"lowercase\n";
        break;
        case '0'...'9': cout<<"digit\n";
        break;
        default: cout<<"Invalid case";
        break;
    }


    return 0;
}

