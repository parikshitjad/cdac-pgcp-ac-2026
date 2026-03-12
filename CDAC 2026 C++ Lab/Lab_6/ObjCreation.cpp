#include<iostream>
using namespace std;
#include<string.h>

class student
{
    int rollno;
    char name[20];

    public:
    void display();
    student(int, char *);
};
student::student(int r, char * sptr)
{
    rollno = r;
    strcpy(name, sptr);
}
void student::display()
{
    cout<<"Roll No: "<<rollno<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"\n";
}
int main()
{
    student * ptr = new student(1, "Anand");
    ptr->display();
}