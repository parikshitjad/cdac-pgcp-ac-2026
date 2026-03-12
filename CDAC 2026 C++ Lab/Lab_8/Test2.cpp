#include<iostream>
using namespace std;
class Test {
public:
     Test() 
	 { 
	 
	 cout << "\n Constructor executed"<<this<<endl; 
	 }
 
    ~Test() { cout << "\n Destructor executed"<<this<<endl;
	 }
};
 int main()
{
    // Create multiple objects of the Test class
    Test  t1, t2, t3;
    cout<<&t1<<endl;
     cout<<&t2<<endl;
      cout<<&t3<<endl;
}