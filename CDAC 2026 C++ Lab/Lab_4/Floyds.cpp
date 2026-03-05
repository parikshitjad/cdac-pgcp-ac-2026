#include <iostream>
using namespace std;

int main()
{
    int rows, number=1;

    cout<<"Enter the number of rows for floyd's Triangle: ";
    cin>>rows;

    cout<<"Floyd's Triangle: "<<endl;

    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<number<<" ";
            number++;
        }
        cout<<endl;
    }
    return 0;
}