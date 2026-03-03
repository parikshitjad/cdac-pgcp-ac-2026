#include <stdio.h>

int main()
{
    int num, i;

    for(num=3; num<=10; num++)
    {
        int fact = 1;
        for(i=1; i<=num; i++)
        {
            fact = fact * i;
        }
        printf("Factorial of %d is %d\n", num, fact);
    }
    return 0;
}