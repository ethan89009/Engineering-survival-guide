#include<iostream>
using namespace std;
class student
{
    string name;
    string age;
public:
    student(){
        name="Bhavesh";
        age="15";
    }
    student(string nm,string ag){
        name=nm;
        age=ag;
    }
    void displayDetails(){
        cout<<"Name :"<<name<<endl;
        cout<<"Age  :"<<age<<endl;
    }
    ~student(){
        cout<<"destructor called..."<<endl;
    }
};

int main(){
    student s1;
    string name,age;
    cout<<"Enter the name and age of the student"<<endl;
    cin>>name>>age;
    student s2(name,age);
    cout<<"The student details are:"<<endl;
    s1.displayDetails();
    s2.displayDetails();
    return 0;
}
