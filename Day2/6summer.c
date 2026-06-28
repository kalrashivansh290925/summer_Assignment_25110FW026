// WAP to reverse a number

#include <stdio.h>
#include <math.h>

int main(){
        
    int num, rem, rev = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    while(num > 0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    printf("Reversed number = %d", rev);

    return 0; 
}

