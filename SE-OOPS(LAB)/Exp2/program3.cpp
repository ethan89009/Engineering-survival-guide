//using getters and setters and scope resolution
#include<iostream>
using namespace std;
class Date
{
    int day,month,year;
public:
    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);
    int getDay();
    int getMonth();
    int getYear();
    void dispDate();
};
void Date::dispDate(){cout<<getDay()<<"/"<<getMonth()<<"/"<<getYear()<<endl;}
void Date::setDay(int d)
{
    day=d;
}
void Date::setMonth(int m)
{
    month=m;
}
void Date::setYear(int y)
{
    year=y;
}
int Date::getDay(){return day;}
int Date::getMonth(){return month;}
int Date::getYear(){return year;}

int main(){
    Date d1;
    d1.setDay(5);
    d1.setMonth(9);
    d1.setYear(2022);
    d1.dispDate();
return 0;
}
