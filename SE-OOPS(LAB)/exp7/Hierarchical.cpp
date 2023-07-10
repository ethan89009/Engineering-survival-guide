#include <iostream>
#include <string>
using namespace std;
class vehichle
{  protected:
     string vbrand;
    string vcolor;
    void setVData()
    { cout<<"enter vehicle brand and color\n";
      cin.clear();
      cin>>vbrand>>vcolor;
    }
    void dispVData()
    {   cout<<"vehicle brand:"<<vbrand<<endl;
        cout<<"vehicle color:"<<vcolor<<endl;
    }
};
class FourWheeler: public vehichle
{   string vtype;
    string vname;
    public:
    void setFWData()
    { setVData();
      cout<<"enter vehicle type and name \n";
      cin>>vtype>>vname;
    }
    void dispFWData()
    {    dispVData();
         cout<<"vehichletype:"<<vtype<<endl;
        cout<<"vehicle name"<<vname<<endl;
    }
};

class TwoWheeler: protected vehichle
{ public :
    string vtype;
    string vname;
    void setTWData()
    { setVData();
      cout<<"enter vehicle type and name \n";
      cin>>vtype>>vname;
    }
    void dispTWData()
    {   dispVData();
        cout<<"vehichletype:"<<vtype<<endl;
        cout<<"vehicle name"<<vname<<endl;
    }
};

int main()
{ TwoWheeler tw;
  FourWheeler fw;
  tw.setTWData();
  fw.setFWData();
  tw.dispTWData();
  fw.dispFWData();
  return 0;
}

