#include<iostream>
using namespace std;
#include<string.h>

class student
{
    int rollno;
    float marks;
    public:
    void display();
    void accept();  
};

void student::accept()
{
    cout<<"accept rollno and marks\n";
    cin>>rollno>>marks;
}

void student::display()
{
    cout<<"rollno is "<<rollno<<" and marks is "<<marks<<endl;
    cout<<"\n";
}

int main()
{
    int n,i;
    cout<<"enter the number of students\n";
    cin>>n;
    student * ptr = new student[n];
    for(i=0;i<n;i++)
    {
        ptr[i].accept();
    }
    for(i=0;i<n;i++)
    {
        ptr[i].display();
    }
}