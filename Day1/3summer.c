// Wap to find factorial of a given number

#include <stdio.h>

int main(){
    int num, i, var=1;

    printf("Enter the number : ");
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        var = var*i;
    }

    printf("The factorial of %d is : %d", num, var);

    return 0;
}