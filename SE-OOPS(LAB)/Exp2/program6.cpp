//class to store box objects
#include<iostream>
using namespace std;
class box
{
    int length,breadth,height;
    int surfaceArea,volume;
public:
    void setBoxValue(int len=0,int bre=0,int ht=0){
        length=len;
        breadth=bre;
        height=ht;
    }
    int getLength(){return length;}
    int getBreadth(){return breadth;}
    int getHeight(){return height;}
    void calcVolAndSurfaceArea(){
        surfaceArea=2*(length*breadth+breadth*height+length*height);
        volume=length+breadth+height;
    }
    int getSurfaceArea(){return surfaceArea;}
    int getVolume(){return volume;}

};

int main()
{
    box boxes[20];
    int n,i;
    int tempLen,tempBred,tempHeight;
    cout<<"Enter the number of box objects"<<endl;
    cin>>n;
     for(i=0;i<n;i++){
        cout<<"Enter the Length Breadth and Height of the box"<<endl;
        cin>>tempLen>>tempBred>>tempHeight;
        boxes[i].setBoxValue(tempLen,tempBred,tempHeight);
        boxes[i].calcVolAndSurfaceArea();
    }
    cout<<"The surface area and volume of the different boxes are"<<endl;;
    for(i=0;i<n;i++){
        cout<<i+1<<".Surface Area of box "<<i+1<<":"<<boxes[i].getSurfaceArea()<<endl;
        cout<<" .Volume of box "<<i+1<<":"<<boxes[i].getVolume()<<endl;
    }
    return 0;
}
