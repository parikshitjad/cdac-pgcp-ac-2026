#include<iostream>
using namespace std;

string companyName = "Red Hat Software Solutions";

class Employee
{
    int empId;
    string empName;
    float empSalary;

    static int totalEmployees;

    public:

    Employee(int id, string name, float salary)
    {
        empId = id;
        empName = name;
        empSalary = salary;

        totalEmployees++;
    }

    void display()
    {
        cout<<endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Employee Salary: " << empSalary << endl;
        cout << "Company Name: " << companyName << endl;
    }

    static void showTotalEmployees()
    {
        cout<<endl;
        cout << "Total Employees Present: " << totalEmployees << endl;
    }
};

int Employee::totalEmployees = 0;

int main()
{
    Employee e1(1, "Aryan", 50000);
    Employee e2(2, "Sujay", 60000);
    Employee e3(3, "Sameer", 70000);

    e1.display();
    e2.display();
    e3.display();

    Employee::showTotalEmployees();

    return 0;
}