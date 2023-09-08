#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers to check which is greater:");
    scanf("%d%d%d",&a,&b,&c);

    if ( a == b == c)
    {
        printf("All numbers are equal.");
    }
    else if(a>b && a>c)
    {
        printf("%d is the greatest of all 3",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is the greatest of all 3",b);
    }
    else
    {
        printf("%d is the greatest of all 3",c);
    }
}
