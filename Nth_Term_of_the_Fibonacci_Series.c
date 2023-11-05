#include <stdio.h>

int main() {
    int first = 0, second = 1, sum = 0;
    int n, i;
    int result[50];
    
    printf("Enter the term you want to find in Fibonacci series: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0th term in the series is: 0");
    } else if (n == 1) {
        printf("1st term in the series is: 1");
    } else {
        result[0] = 0;
        result[1] = 1;

        for (i = 2; i <= n; i++) {
            sum = first + second;
            result[i] = sum;
            first = second;
            second = sum;
        }

        printf("%dth term in the series is: %d", n, result[n]);
    }

    return 0;
}
