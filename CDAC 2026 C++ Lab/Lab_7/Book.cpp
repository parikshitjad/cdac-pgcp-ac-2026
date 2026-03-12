#include<iostream>
using namespace std;

class Book
{
    public:
        int book_id;
        string bookname;
        string author;
        float price;

        void input()
        {
            cout<<"Enter the book id: ";
            cin>>book_id;
            cout<<"Enter the book name: ";
            cin>>bookname;
            cout<<"Enter the author name: ";
            cin>>author;
            cout<<"Enter the price: ";
            cin>>price;
        }

        void display()
        {
            cout<<"\nBook id: "<<book_id<<endl;
            cout<<"\nBook name: "<<bookname<<endl;
            cout<<"\nAuthor name: "<<author<<endl;
            cout<<"\nPrice: "<<price<<endl;
        }
};

int main()
{
    Book b[2];

    cout<<"Enter Book details: \n";

    cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>";

    for(int i=0; i<2; i++)
    {
        cout<<"\nBook "<<i+1<<endl;
        b[i].input();
    }

    cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>";

    cout<<"\n Book details: \n";

    for(int i=0; i<2; i++)
    {
        cout<<"\nBook "<<i+1<<endl;
        b[i].display();
    }

    return 0;
}