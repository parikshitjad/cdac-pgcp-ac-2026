#include<iostream>
using namespace std;

class Account
{
	int accNo, balance;
	public:
	void accept()
	{
		cout<<"\n Enter value for accNo and balance\n";
		cin>>accNo>>balance;
	}
	void display()
	{
		cout<<"account no is: "<<accNo<<"\n"<<"balance is: "<<balance<<endl;
	}
	void withDraw(int amt)
	{
		if(amt<balance)
		{
			balance -= amt;
			cout<<"remaining balance is: "<<balance;
		}
		else
		{
			cout<<"Insufficient balance time to deposit money\n";
		}
	}
};

int main()
{
	Account a1;
	a1.accept();
	a1.withDraw(500);
	return 0;
}