#include<iostream>
#include<string>
using namespace std;
class Teacher
{
protected:
    string tdept,tname;
    void setTData()
    {
        cout<<"Enter the teacher name and department\n";
        cin>>tname>>tdept;
    }
    void dispTData()
    {
        cout<<"Teacher name = "<<tname<<endl;
        cout<<"Teacher department = "<<tdept<<endl;
    }

};
class Student
{
    string sname,sbranch;
public:
    void setSData()
    {
        cout<<"Enter the student name and branch\n";
        cin>>sname>>sbranch;
    }
    void dispSData()
    {
        cout<<"Student name is = "<<sname<<endl;
        cout<<"Student branch is = "<<sbranch<<endl;
    }
};
class Teaching_Asst:protected Teacher,private Student
{
public:
    string course,emp_type;
    void setTAData()
    {
        cout<<"Enter course name\n"<<endl;
        cin>>course;
        cout<<"Enter employee type as teacher /s student"<<endl;
        cin>>emp_type;
        if(emp_type=="teacher")
            setTData();
        else
            setSData();
    }
    void dispTAData()
    {
        if(emp_type=="teacher")
            dispTData();
        else
            dispSData();
        cout<<"Course = "<<course<<endl;
    }
};
int main()
{
    Teaching_Asst obj;
    obj.setTAData();
    obj.dispTAData();
    return 0;
}
