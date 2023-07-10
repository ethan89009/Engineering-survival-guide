#include<iostream>
using namespace std;
class date
{
    string day;
    string month;
    string year;
public:
    date(string d,string m,string y){
        day=d;
        month=m;
        year=y;
    }
    date(){
        day="06";
        month="09";
        year="2022";
    }
    date(date &date1){
        day=date1.day;
        month=date1.month;
        year=date1.year;

    }
    void displayDate(){
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
int main(){
    date d1("20","09","2022"),d2;
    date d3(d1);
    cout<<"The date d1 is set as :"<<endl;
    d1.displayDate();
    cout<<"The date d2 is set as :"<<endl;
    d2.displayDate();
    cout<<"The date d3 is set as :"<<endl;
    d3.displayDate();
    return 0;
}
