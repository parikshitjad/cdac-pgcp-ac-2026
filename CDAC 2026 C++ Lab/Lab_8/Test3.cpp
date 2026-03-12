#include <iostream>
using namespace std;
 class Test {
public:
    // User-Defined Constructor
    Test() { cout << "\nConstructor executed"; }
 
    // User-Defined Destructor
    ~Test() { cout << "\nDestructor executed"; }
};
main()
{
    Test t;
}