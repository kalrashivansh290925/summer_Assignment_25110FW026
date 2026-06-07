// WAP to check if the given number is a prime number 

#include <stdio.h>

int main(){
    int num, i, count=0;
    printf("Enter the number : ");
    scanf("%d", &num);

    for(i=2; i<=num/2; i++){
        if(num%i == 0){
        count++;
        break;
        }
        else
        continue;
    }

    if(count==0)
    printf("The entered number is a prime number");

    else
    printf("The entered number is not a prime number");
}