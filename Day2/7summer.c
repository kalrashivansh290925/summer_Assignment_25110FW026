// WAP to find product of digits of a number

#include <stdio.h>

int main(){
    int num, i, prod=1, var, rem;

    printf("Entet the number : ");
    scanf("%d", &num);

    var = num;

    while(var>0){
        rem = var%10;
        prod = prod*rem;
        var = var/10;
    }

    printf("The product of digits is : %d", prod);

    return 0;
} 