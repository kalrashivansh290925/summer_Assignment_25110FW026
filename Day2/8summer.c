//WAP to check whether a number is pallindrome

#include <stdio.h>

int main(){
    int num, i, var, rem, rev;
    
    printf("Enter the number : ");
    scanf("%d", &num);

    while(num > 0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if(rev == num)
    printf("The number %d is pallindrome", num);

    else
    printf("The number is not pallindrome");
}