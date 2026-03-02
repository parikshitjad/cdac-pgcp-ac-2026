#include <stdio.h>

int main()
{
    int i, count=0;
    int org_num, lastdigit, sum;

    printf("Armstrong numbers between 0 to 999 are:\n");

    for(i=0;i<1000;i++)
    {
        org_num=i;
        sum=0;
        while(org_num!=0)
        {
            lastdigit=org_num%10;
            sum=sum+(lastdigit*lastdigit*lastdigit);
            org_num=org_num/10;
        }
        if(sum==i)
        {
            printf("%d\n",i);
            count++;
        }
    }
    printf("Total %d Armstrong numbers are there between 0 to 999",count);
    return 0;
}