#include <stdio.h>
int main()
{
    int num,i;
    int product = 1;
    printf("Enter the number to find factorial: ");
    scanf("%d",&num);
    for(i=num;i>0;i--)
    {
        product = product*i;
    }

    printf("Factorial of %d is %d",num,product);
}