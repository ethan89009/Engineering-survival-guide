#include<iostream>
using namespace std;
class account
{
    static acnum;
    string name;
    int acnumber;
    string type;
    int balance;
public:
    account()
    {
        cout<<"Enter the Name of the new user"<<endl;
        cin>>name;
        cout<<"Enter the type of account you want to create"<<endl;
        cin>>type;
        cout<<"Enter the value to be deposited"<<endl;
        cin>>balance;
        acnumber=acnum;
        acnum++;
    }
    int getBalance(){return balance;}
    int getAc(){return acnumber;}
    void deposit(int am)
    {
        balance+=am;
        cout<<balance<<" + "<<am<<endl;
        cout<<"Your current balance is : "<<balance<<endl;
    }
    void withdraw(int am){
        if(balance-am<0)
        {
            cout<<"Cannot withdraw amount less than balance!"<<endl;
            return;
        }
        balance-=am;
        cout<<balance<<" - "<<am<<endl;
        cout<<"Your current balance is : "<<balance<<endl;
    }
};
int main()
{
    account a1;
    int c=1;
    while(c!=0)
    {
        cout<<"1.Check Balance  2.Deposit to your account  3.Withdraw from your account  4.Get account number  0.Exit"<<endl;
        cin>>c;
        switch(c)
        {
            case 1:cout<<"Your balance is : "<<a1.getBalance()<<endl;break;
            case 2:cout<<"Enter the amount to be deposited : "<<endl;

        }
    }
    return 0;
}

