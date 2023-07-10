//accessing data members using public

#include <iostream>
using namespace std;

class Fraction
{
public:
    int num,deno;
    void dispFraction()
    {
        cout<<num<<"/"<<deno<<endl;

    }
};
int main(){
    Fraction f1;
    f1.num=3;
    f1.deno=4;
    f1.dispFraction();
return 0;
}
