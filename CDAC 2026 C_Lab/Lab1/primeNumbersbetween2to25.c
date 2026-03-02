#include<stdio.h>

int main()
{
    int num, i, isprime;

    printf("Prime numbers between 2 to 25 are:\n");

    for(num = 2; num <= 25; num++)
    {
        isprime = 1;

        for(i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                isprime = 0;
                break;
            }
        }

        if(isprime == 1)
        {
            printf("%d, ", num);
        }
    }
    return 0;
}