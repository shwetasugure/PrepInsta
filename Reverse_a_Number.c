#include<stdio.h>

int main()
{
    int num,reminder,arr[10],i,j=0;
    printf("Enter a number to reverse:");
    scanf("%d",&num);
    i=0;
    while(num>0)
    {
        reminder = num%10;
        arr[i]=reminder;
        printf("%d",arr[i]);    
        i++;
        num = num/10;
    }
}