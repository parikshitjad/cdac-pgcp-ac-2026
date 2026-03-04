#include <iostream>
using namespace std;

class Student
{
    int rollno;
    string dob;
    float marks;

public:

    Student(int rn, string bd, float ms)
    {
        rollno=rn;
        dob=bd;
        marks=ms;
    }

    void display()
    {
        cout<<"\nRoll No: "<<rollno<<endl;
        cout<<"DOB: "<<dob<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"==============================";
    }
};
    int main()
{

    Student s1(1, "01/02/2002", 98);
    Student s2(2, "01/02/2002", 98);
    Student s3(3, "01/02/2002", 98);
    Student s4(4, "01/02/2002", 98);
    Student s5(5, "01/02/2002", 98);
    Student s6(1, "01/02/2002", 98);
    Student s7(1, "01/02/2002", 98);
    Student s8(1, "01/02/2002", 98);
    Student s9(1, "01/02/2002", 98);
    Student s10(1, "01/02/2002", 98);
    

    s1.display();
    s1.display();
    s1.display();
    s1.display();
    s1.display();
    s1.display();
    s1.display();
    s1.display();
    s1.display();
    s1.display();
}