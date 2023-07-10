//student report using the header file grade_report.h
#include<iostream>
#include<string>
#include "grade_report.h"
using namespace std;
using namespace gradereport;

int main()
{
    student s[10];
    report r[10];
    cout<<"Enter the number of grade reports to be generated\n";
    int n;
    string student_name,br_name;
    cin>>n;
    int r1;
    double mk1,mk2,mk3;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter student name, branch ,rollno \n";
        cin>>student_name>>br_name>>r1;
        s[i].setRollno(r1);
        s[i].setName(student_name);
        s[i].setBranch(br_name);
        cout<<"Enter the marks of students in sub1,sub2,sub3\n";
        cin>>mk1>>mk2>>mk3;
        r[i].setMk1(mk1);
        r[i].setMk2(mk2);
        r[i].setMk3(mk3);
        r[i].computeGrade();
    }
      for(int i=0;i<n;i++)
    {
       cout<<s[i].getSname()<<endl;
       cout<<s[i].getRollno()<<endl;
       cout<<s[i].getBranch()<<endl;
       cout<<"Subject 1"<<endl<<r[i].getMk1()<<endl;
       cout<<"Subject 2"<<endl<<r[i].getMk2()<<endl;
       cout<<"Subject 3"<<endl<<r[i].getMk3()<<endl;
       cout<<"Percent"<<endl<<r[i].getPercent()<<endl;
       cout<<"Grade"<<endl<<r[i].getGrade();
       cout<<endl;
    }
    return 0;
}
