#include <stdio.h>

int main()
{
    int n, i, sum=0;
    printf("Enter the value of N : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        sum = sum + i;
    }

    printf("The sum of first N natural numbers is : %d", sum);

    return 0;
}