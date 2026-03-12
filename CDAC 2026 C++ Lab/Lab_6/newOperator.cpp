#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int *ptr = new int[n];
    cout<<"Accept the elements: ";
    for(i=0;i<n;i++)
    {
        cin>>ptr[i];
    }
    cout<<"The elements are: ";
    for(i=0;i<n;i++)
    {
        cout<<ptr[i]<<" ";
    }
}