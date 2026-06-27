// WAP to find factors of a number

#include <stdio.h>

int main(){
    int num, i, temp;
    printf("Enter the number : ");
    scanf("%d", &num);

    temp = num;
    printf("\nThe factors of the given number are : \n");

    for(i=1; i<=num/2; i++){
        if(temp%i == 0)
        printf("%d\t", i);

        else 
        continue;
    }
}