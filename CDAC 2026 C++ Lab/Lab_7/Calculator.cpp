#include<iostream>
using namespace std;

class Calculator{

    public:

    int num1, num2;

    void input()
    {
        cout<<"Enter the first number: ";
        cin>>num1;

        cout<<"Enter the second number: ";
        cin>>num2;
    }

    void add()
    {
        cout<<"\nThe sum of the two numbers is: "<<num1+num2<<endl;
    }

    void substract()
    {
        cout<<"\nThe substraction of the two numbers is: "<<num1-num2<<endl;
    }

    void multiply()
    {
        cout<<"\nThe multiplication of the two numbers is: "<<num1*num2<<endl;
    }

    void divide()
    {
        cout<<"\nThe division of the two numbers is: "<<num1/num2<<endl;
    }

    void square()
    {
        cout<<"\nThe square of 1st number is: "<<num1*num1<<endl;
        cout<<"\nThe square of 2nd number is: "<<num2*num2<<endl;
    }
    
};

int main()
{
    Calculator cl;

    cl.input();
    cl.add();
    cl.substract();
    cl.multiply();
    cl.divide();
    cl.square();
}