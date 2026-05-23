// WAP to count digits in a given number

#include <stdio.h>

int main(){
    int num, i, var, count=0;
    printf("Enter the number : ");
    scanf("%d", &num);

    var = num;

    while(var>0){
        var = var/10;
        count++;
    }

    printf("The number of digits in the given number is %d", count);

    return 0;
}