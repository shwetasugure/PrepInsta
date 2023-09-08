#include <stdio.h>
int main()
{
    int a, num, sum;
    printf("Enter a number from where the series start:");
    scanf("%d",&a);
    printf("Enter a number too end the series");
    scanf("%d",&num);
    for (int a ;a <= num; a++ )
    {
        sum = sum + a;
    }
    printf("Sum is : %d",sum);  

}