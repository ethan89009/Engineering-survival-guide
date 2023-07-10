#include<iostream>
using namespace std;
class student
{
    string name;
    string age;
    string depart;
public:
    student(){
        name="Bhavesh";
        age="15";
        depart="COMP";
    }
    student(string nm,string ag,string dep){
        name=nm;
        age=ag;
        depart=dep;
    }
    void displayDetails(){
        cout<<"Name :"<<name<<endl;
        cout<<"Age  :"<<age<<endl;
        cout<<"Department :"<<depart<<endl;
    }
};

int main(){
    student s1;
    string name,age,depart;
    cout<<"Enter the name age and department of the student"<<endl;
    cin>>name>>age>>depart;
    student s2(name,age,depart);
    cout<<"The student details are:"<<endl;
    s1.displayDetails();
    s2.displayDetails();
    return 0;
}
