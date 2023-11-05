#include <stdio.h>
int main()
{
    int num,i;
    printf("Enter a number to find factorial: ");
    scanf("%d",&num);
    for(i=1;i<=num/2;i++)
    {
        if (num%i==0)
        {
            printf("%d,",i);
        }
    }
    printf("%d",num);
}