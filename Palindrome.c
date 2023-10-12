#include<stdio.h>
int main()
{
    int num,remainder,reverse = 0,temp;
    printf("Enter a number:");
    scanf("%d",&num);
    temp = num;

    while(num>0)
    {
        remainder = num%10;
        reverse = reverse*10+remainder;
        num=num/10;
    }
    if(reverse==temp)
    {
        printf("Number is a Palindrome.");
    }
    else
    {
        printf("Number is not a Palindrome.");
    }

}