#include<iostream>
using namespace std;
class incrementOperator
{
    int value;
public:
    incrementOperator(){value=0;}
    incrementOperator(int v){value=v;}
    void operator++(){value++;}
    void operator++(int){}
    void display()
    {
        cout<<"Value = "<<value<<endl;
    }
};
int main()
{
    incrementOperator i1(2);
    incrementOperator i2(4);
    i1.display();
    i2.display();
    ++i1; //i1.operator+() is called
    cout<<"Modified value of i1 :"<<endl;
    i1.display();
    i2++; //i2.operator++(int) is called
    cout<<"Modified value of i2 :"<<endl;
    i2.display();
    return 0;
}

