#include <stdio.h>

int main()
{
    int first=0,second=1,sum=0;
    int n,i;
    printf("Enter no.of terms in Fibonacci series: ");
    scanf("%d",&n);
    printf("%d-%d",first,second);
    for(i=0;i<n-2;i++)
    {
        sum = first + second;
        printf("-%d",sum);
        first = second;
        second = sum;
    }

}