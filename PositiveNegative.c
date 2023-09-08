#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number to check if positive or negative:");
    scanf("%d",&a);
    if (a > 0)
    {
        printf("Number is positive");
    }
    else if (a == 0){
        printf("Zero");
    }
    else
    {
        printf("Number is negative");
    }

}