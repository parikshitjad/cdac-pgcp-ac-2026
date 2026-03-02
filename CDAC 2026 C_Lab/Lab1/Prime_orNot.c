#include <stdio.h>

int main()
{
    int num, i=2;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(i<num)
    {
        if(num%i==0)
        {
            printf("%d is not a prime number", num);
            return 0;
        }
        i++;
    }

    printf("%d is a prime number", num);
        
    return 0;
}