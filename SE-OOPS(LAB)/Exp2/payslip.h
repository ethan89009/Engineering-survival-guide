#include<iostream>
using namespace std;

namespace payslip
{
    class employee
    {
        string name;
        int id;
    public:
        void setNameAndId(string n,int id){
            name=n;
            this->id=id;
        }
        string getName(){return name;}
        int getId(){return id;}
    };
    class payscale
    {
        int hra,ta,da ,basicPay,deduction;
        float gradePay;
    public:
        void setPayscale(int hra,int ta,int da,int basicPay,int deduction){
            this->hra=hra;
            this->ta=ta;
            this->da=da;
            this->basicPay=basicPay;
            this->deduction=deduction;
        }
        void calcGradePay(){
            gradePay=basicPay*2.57+hra+ta+da-deduction;
        }
        int getDeduc(){return deduction;}
        int getHra(){return hra;}
        int getTa(){return ta;}
        int getDa(){return da;}
        int getBasicPay(){return basicPay;}
        float getGradePay(){return gradePay;}
    };
}
