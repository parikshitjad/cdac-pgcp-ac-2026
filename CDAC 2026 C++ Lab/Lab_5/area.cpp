#include<iostream>
using namespace std;

//square area
int area(int side)
{
    return side * side;
}

//rectangle area
int area(int length, int breadth)
{
    return length * breadth;
}

int main()
{
    cout << "Area of Square: " << area(5) << endl;
    cout << "Area of Rectangle: " << area(10, 20) << endl;
}