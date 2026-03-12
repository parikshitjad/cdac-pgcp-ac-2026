#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int base=2;
    int exponent=4;
    int power=pow(base,exponent);
    cout<<"Power of " << base << " raised to "<< exponent << " is: "<<power;

    return 0;
}