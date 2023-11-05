#include <stdio.h>

void primeFactors(int num)
{
    int i;
    printf("Prime Factors of the numbers are:");
    for(i=2;num>1;i++)
    {
        while (num%i==0)
        {
            printf("%d ",i);
            num = num/i;
        }
    }
}

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    primeFactors(num);
}