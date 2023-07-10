//to create a class called phonebook
#include<iostream>
using namespace std;
class phonebook
{
    int contactNumber;
    string contactName;
public:
    void setContactNumber(int number){
        contactNumber=number;
    }
    void setContactName(string name){
        contactName=name;
    }
    int getContactNumber(){return contactNumber;}
    string getContactName(){return contactName;}
};
int main()
{
    phonebook contacts[50];
    int n,i,tempNumb;
    string tempName;
    cout<<"Enter the number of contacts you want to enter"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter the name of the contact"<<endl;
        cin>>tempName;
        cout<<"Enter the number of the contact"<<endl;
        cin>>tempNumb;
        contacts[i].setContactName(tempName);
        contacts[i].setContactNumber(tempNumb);
    }
    cout<<"Your contacts are\n";
    for(i=0;i<n;i++){
        cout<<i+1<<".Name:"<<contacts[i].getContactName()<<endl;
        cout<<" .Number:"<<contacts[i].getContactNumber()<<endl;
    }
    return 0;
}
