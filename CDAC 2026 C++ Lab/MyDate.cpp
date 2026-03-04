#include <iostream>
using namespace std;

class MyDate
{
	private:
	int day, month, year;
	public:
	
	void accept()
	{
		cout<<"\n accept day,month,year\n";
		cin>>day>>month>>year;
	}
	void display()
	{
		cout<<"date is: "<<day<<"/"<<month<<"/"<<year<<endl;
	}
	void setDay(int d)
	{
		cout<<"Setter function is called\n";
		day=d;
	}
	void setMonth(int m)
	{
		cout<<"Setter function for month is called\n";
		month=m;
	}
	int getMonth()
	{
		return month;
	}
};

int main()
{
	MyDate d1;
	cout<<"Size of object d1: "<<sizeof(d1);
	d1.accept();
	d1.display();

	d1.setDay(28);
	d1.display();

	d1.setMonth(2);
	d1.display();

	int m=d1.getMonth();
	cout<<"Current value for month is: "<<m<<endl;

	return 0;
}
		
	