#include <iostream>
#include <string>
using namespace std;
class Teacher
{   protected:
    string tdept;
    string tname;
    void setTData()
    { cout<<"enter teacher's name and dept taught\n";
      cin.clear();
      cin>>tname>>tdept;
    }
    void dispTData()
    {   cout<<"teacher name:"<<tname<<endl;
        cout<<"dept:"<<tdept<<endl;
    }
};
class Student
{   string sbranch;;
    string sname;
    public:
    void setSData()
    { cout<<"enter student's name and branch \n";
      cin.clear();
      cin>>sname>>sbranch;
    }
    void dispSData()
    {   cout<<"student name:"<<sname<<endl;
        cout<<"student branch:"<<sbranch<<endl;
    }
};

class Teaching_Asst: protected Teacher,private Student
{ public :
    string course;
    string emp_type;
    void setTAData()
    {   cout<<"enter the course being taught\n";
        cin>>course;
        cout<<"enter emp type as teacher/student\n";
        cin>>emp_type;
        if(emp_type=="teacher")
        setTData();
        else
            setSData();
    }
    void dispData()
    {   if(emp_type=="teacher")
            dispTData();
        else
            dispSData();
        cout<<"course:"<<course<<endl;
    }
};

int main()
{ Teaching_Asst t;
  t.setTAData();
  t.dispData();
  return 0;
}
