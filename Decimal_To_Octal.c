#include <stdio.h>

void Conversion(int num)
{
    int i=0;
    int arr[32];
    while(num>0)
    {
        arr[i] = num % 8;
        i++;
        num = num/8;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d ",arr[j]);
    }
}

int main()
{
    int num;
    printf("Enter a Number to convert into Binary: ");
    scanf("%d",&num);
    Conversion(num);
}