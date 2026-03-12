#include<iostream>
using namespace std;

int main()
{
    int num[] = {12,32,18,10};
    int size = sizeof(num)/sizeof(num[0]);

    //cout<<"Reversed Array: ";

    for(int i = 0, j=size-1; i<=j; i++, j--)
    {