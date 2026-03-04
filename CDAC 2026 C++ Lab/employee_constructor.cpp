#include <iostream>

using namespace std;

class Employee
{
    int id, salary;

    public:
    
        Employee()
        {
            cout<<"No arg constructor called. \n";
            id=1001;
            salary=50000;
        }

        Employee(int employeeId, int employeeSalary)
        {
            cout<<"Parameterized constructor called. \n";
            id = employeeId;
            salary = employeeSalary;
        }

        void accept()
        {
            cout<<"Enter employee id and salary:";
            cin>>id>>salary;
        }

        void display()
        {
            cout<<"Employee id: "<<id<<" and salary is: "<< salary<< endl;
        }

        void setId(int i)
        {
            id = i;
        }

        int getId()
        {
            return id;
        }

        void setSalary(int s)
        {
            salary = s;
        }

        int getSalary()
        {
            return salary;
        }     
    };

int main()
{
    Employee e1;
    e1.accept();
    e1.display();

    Employee e2(2002, 60000);
    e2.display();
    return 0;
}