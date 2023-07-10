#include<iostream>
using namespace std;
class box
{
    int length;
    int breadth;
    int height;
public:
    box(int l, int b, int h){
        length=l;
        breadth=b;
        height=h;
    }
    box(){
        length=9;
        breadth=6;
        height=9;
    }
    box(box &box1){
        length=box1.length;
        breadth=box1.breadth;
        height=box1.height;
    }
    int getLen(){return length;}
    int getBred(){return breadth;}
    int getHeight(){return height;}
    int surfaceA(){return (2*(length*breadth+length*height+breadth*height));}
    int vol(){return length*breadth*height;}
};

int main(){
    box b1;
    box b2(2,5,7);
    box b3(b2);
    cout<<"The default initialization box "<<endl;
    cout<<"length:"<<b1.getLen()<<" breadth:"<<b1.getBred()<<" height:"<<b1.getHeight()<<endl;
    cout<<"The default initialization of box with value is"<<endl;
    cout<<"length:"<<b2.getLen()<<" breadth:"<<b2.getBred()<<" height:"<<b2.getHeight()<<endl;
    cout<<"The default initialization of box with value of b2"<<endl;
    cout<<"length:"<<b3.getLen()<<" breadth:"<<b3.getBred()<<" height:"<<b3.getHeight()<<endl;
    cout<<"The surface area of b1 is :"<<b1.surfaceA()<<endl<<" The surface area of b2 is:"<<b2.surfaceA()<<endl<<" The surface area of b3 is:"<<b3.surfaceA()<<endl;
    cout<<"The vol of b1 is :"<<b1.vol()<<endl<<" The volume of b2 is:"<<b2.vol()<<endl<<" The volume of b3 is:"<<b3.vol()<<endl;
    return 0;
}
