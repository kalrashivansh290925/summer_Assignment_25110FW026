// WAP to find nth Fibonacci term

#include <stdio.h>

int main(){
    long int num, i, temp, var1=0, var2=1;

    printf("Enter the term required in fibonacci series (starting from 0) : ");
    scanf("%d", &num);

    for(i = 0; i < num-2; i++){

        temp = var2;
        var2 += var1;
        var1 = temp;
        
    } 
    printf("The %dth term is : %d", num, var2);
    return 0;
}