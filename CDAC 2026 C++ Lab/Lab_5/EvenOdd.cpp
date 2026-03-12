#include<iostream>
using namespace std;

int main()
{
    // int n;
    // cout<<"Enter number of elements: ";
    // cin>>n;

    int num[5];
    int even = 0, odd = 0;

    cout<<"Enter Array Elements: ";

    for(int i=0; i<5; i++)
    {
        cin>>num[i];
    }
    
    for(int i = 0; i < 5; i++)
    {
        if(num[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;

    return 0;
}