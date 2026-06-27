// WAP to generate Fibonacci series

#include <stdio.h>
int main(){

    printf("Program started\n");
fflush(stdout);
    int terms, var1=0, var2=1, temp;

    printf("Enter the number of terms in fibonacci series : ");
    scanf("%d", &terms);

    printf("The required fibonacci series is : \n0 \n1 \n");
    for(int i = 0; i < terms-2; i++){
        temp = var2;
        var2 = var2 + var1;
        var1 = temp;

        printf("%d \n", var2);
    }
    return 0;
}