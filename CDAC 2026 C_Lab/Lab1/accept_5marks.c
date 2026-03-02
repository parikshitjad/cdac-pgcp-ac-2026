#include <stdio.h>

int main()
{
    int a, b, c, d, e, sum;
    float avg;

    printf("Enter the marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    sum = a + b + c + d + e;
    avg = (float)sum / 5;

    printf("Average of marks of 5 subjects: %.2f\n", avg);
}