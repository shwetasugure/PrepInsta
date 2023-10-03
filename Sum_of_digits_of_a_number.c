#include<stdio.h>
int main()
{
    int n,num,reminder,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    num = n;
    while(n>0)
    {
        reminder=n%10;
        sum = sum+reminder;
        n = n/10;
    }
    printf("Sum of digits of %d is %d",num,sum);
}