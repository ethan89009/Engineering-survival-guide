#include<iostream>
using namespace std;

class books
{
    string author;
    string title;
    int price;
    int stock;
public:
    books()
    {
        author="unknown author";
        title="not known";
        price=10;
        stock=10;
    }
    books(string author,string title, int price,int stock)
    {
        this->author=author;
        this->title=title;
        this->price=price;
        this->stock=stock;
    }
    books(books &b1)
    {
        author=b1.author;
        title=b1.title;
        price=b1.price;
        stock=b1.stock;
    }
    ~books()
    {
        cout<<"ummm...";
    }
    string getAuthor(){return author;}
    string getTitle(){return title;}
    int getPrice(){return price;}
    int getStock(){return stock;}

};
int main()
{
    books b1;
    books b2()

}
