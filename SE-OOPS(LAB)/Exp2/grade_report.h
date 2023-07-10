#include<string>
using namespace std;
namespace gradereport
{
    class student
    {
        int rollno;
        string sname, branch;
    public:
        void setRollno(int r){rollno=r;}
        void setName(string s){sname=s;}
        void setBranch(string b){branch=b;}
        int getRollno(){return rollno;}
        string getSname(){return sname;}
        string getBranch(){return branch;}
    };
    class report
    {
        double mk1,mk2,mk3,per;
        string grade;
    public:
        void setMk1(double m){mk1=m;}
        void setMk2(double m){mk2=m;}
        void setMk3(double m){mk3=m;}
        void computePercent(){per=(mk1+mk2+mk3)/300*100;}
        void computeGrade(){
        computePercent();
        if(per>=70){
            grade="DISTINCTION";
        }
        else if(per>=60&&per<70)
        {
            grade="FIRST";
        }
        else if(per>=50&&per<60)
        {
            grade="SECOND";
        }
        else if(per>=40&&per<50)
        {
            grade="PASS";
        }
        else
            grade="FAIL";
                }
        double getMk1(){return mk1;}
        double getMk2(){return mk2;}
        double getMk3(){return mk3;}
        double getPercent(){return per;}
        string getGrade(){return grade;}
    };

}
