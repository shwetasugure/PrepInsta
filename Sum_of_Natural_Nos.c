#include <stdio.h>
main()
{
    int num, sum = 0;
    printf("Enter number till which sum needs to be found:");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        sum = sum+i;
    }
    printf("Sum of the numbers is:%d",sum);
}