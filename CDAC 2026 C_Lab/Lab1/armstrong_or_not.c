#include <stdio.h>

int main()
{
    int num, temp, r, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (num != 0)
    {
        r = num % 10;
        sum = sum + (r * r * r);
        num = num / 10;
    }

    if(temp == sum)
        printf("The number is an Armstrong number");
    else
        printf("The number is not an Armstrong number" );
}