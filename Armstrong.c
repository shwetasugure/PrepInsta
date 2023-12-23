#include<stdio.h>
int order(int a);
int Armstrong(int num,int length);

int main()
{
    int num,temp,remainder,length,print;
    printf("Enter a number to check whether it is Armstrong:");
    scanf("%d",&num);
    length = order(num);
    if(Armstrong(num,length))
    {
        printf("It is a Armstrong Number.");
    }
    else 
    {
        printf("It is not a Armstrong Number.");
    }
}
int order(int a)
{
    int length=0;
    while (a>0)
    {
        length++;
        a=a/10;
    }
    return length;
    }
int Armstrong(int num,int length)
{
    int remainder,sum=0,temp;
    temp = num;
    while(temp>0)
    {
        remainder = temp%10;
        sum = sum+pow(remainder,length);
        temp = temp/10;        
    }
    return num==sum;
}
