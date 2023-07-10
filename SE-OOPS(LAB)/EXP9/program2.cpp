#include<iostream>
#include<string>

using namespace std;

class Media
{
public:

    string title;
    int price;

    void setMedia()
    {
        cout<<"Set title "<<endl;
        cin>>title;
        cout<<"Set Price"<<endl;
        cin>>price;

    }
    virtual void display()
    {
        cout<<"Price = "<<price<<endl;
        cout<<"Title = "<<title<<endl;
    }

};
class Pages:public Media
{
public:

    int npages;
    void setPages()
    {
        setMedia();
        cout<<"Set the number of pages"<<endl;
        cin>>npages;
    }
    void display()
    {
        Media::display();
        cout<<"Num of pages = "<<npages<<endl;
    }

};
class PlayTime:public Media
{
public:

    int time;
    void setTime()
    {
        setMedia();
        cout<<"Enter play time "<<endl;
        cin>>time;
    }
    void display()
    {
        Media::display();
        cout<<"Time = "<<time<<endl;
    }

};

int main()
{
    Media *m1;
    Pages p1;
    PlayTime pt1;

    p1.setPages();
    pt1.setTime();

    m1=&p1;
    m1->display();

    m1=&pt1;
    m1->display();

    return 0;
}

