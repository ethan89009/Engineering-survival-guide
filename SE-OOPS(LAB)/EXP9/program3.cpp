#include<iostream>

using namespace std;

class animal
{
public:

    string name;
    string type;
    void setAnimal()
    {
        cout<<"Enter the name of the animal\n";
        cin>>name;
        cout<<"Enter the type of animal\n";
        cin>>type;
    }
    virtual void  eat()
    {
        cout<<name<<" eates food \n"<<endl;
    }
    virtual void speak()
    {
        cout<<name<<" makes a sound"<<endl;
    }
};

class cat:public animal
{
public:
    void speak()
    {
        cout<<name<<" says 'meow' "<<endl;
    }
    void eat()
    {
        cout<<name<<" eats cat food "<<endl;
    }
};
class dog:public animal
{
public:
    void speak()
    {
        cout<<name<<" says 'woof' "<<endl;
    }
    void eat()
    {
        cout<<name<<" eats dog food "<<endl;
    }
};

int main()
{
    animal *aptr;

    cat c1;
    dog d1;

    c1.setAnimal();
    d1.setAnimal();

    aptr=&c1;

    aptr->eat();
    aptr->speak();

    aptr=&d1;

    aptr->eat();
    aptr->speak();

    return 0;
}
