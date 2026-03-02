#include<stdio.h>

int main()
{
    int i, isprime;
    int count = 0;
    int num = 2;

    printf("First 25 prime numbers are: \n");

    while(count < 25)
    {
        isprime = 1;

        for(i = 2; i <= num; i++)
        {
            if(num % i == 0)
                break;
        }
        if(i == num)
        {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    return 0;
}