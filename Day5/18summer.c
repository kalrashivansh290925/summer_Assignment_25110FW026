// WAP to check strong number 

#include <stdio.h>

int main(){

    int num, i, sum=0, prod, temp, rem;

    printf("Enter the number : ");
    scanf("%d", &num);

    temp = num;
    
    while(temp>0){
        rem = temp%10;
        temp /= 10;
        prod = 1;

        for(i=rem; i>0; i--){
            prod *= i;
        }

        sum += prod;
    }

    if(sum == num)
    printf("The given number %d is a strong number.", num);
    else
    printf("Not a strong number.");
}