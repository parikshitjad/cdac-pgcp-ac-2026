#include<iostream>
using namespace std;

class Accountdeposit
{
	int accNo=89, balance=1000, amount, accNumber;
	public:
	void accept()
	{
		cout<<"\n Enter accNumber and amount: \n";
		cin>>accNumber>>amount;
	}
	void display()
	{
		cout<<"account no is: "<<accNo<<"\n"<<"balance is: "<<balance<<endl;
	}

void deposit()
	{
		if(accNumber==accNo)
		{
			balance += amount;
			cout<<"Amount deposited! New Balance is: "<<balance;
		}
		else
		{
			cout<<"Invalid accNumber... Enter again\n";
		}
	}
};

int main()
{
	Accountdeposit a1;
	a1.accept();
	a1.deposit();
	return 0;
}