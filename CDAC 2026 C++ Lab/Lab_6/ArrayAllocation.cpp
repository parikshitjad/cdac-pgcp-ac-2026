#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter no of characters in your name\n";
    cin>>n;
    char *ptr=new char[n+1];
    cout<<"accept name\n";
    cin>>ptr;
    cout<<ptr[5]<<endl;
    cout<<ptr[4]<<endl;
    cout<<"name is: "<<ptr<<endl;
    delete [] ptr;
}