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

    Student s1(1, "01/02/2002", 68);
    Student s2(2, "01/02/2002", 52);
    Student s3(3, "01/02/2002", 78);
    Student s4(4, "01/02/2002", 82);
    Student s5(5, "01/02/2002", 97);
    Student s6(6, "01/02/2002", 89);
    Student s7(7, "01/02/2002", 93);
    Student s8(8, "01/02/2002", 100);
    Student s9(9, "01/02/2002", 94);
    Student s10(10, "01/02/2002", 75);

    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
    s6.display();
    s7.display();
    s8.display();
    s9.display();
    s10.display();

    return 0;
}