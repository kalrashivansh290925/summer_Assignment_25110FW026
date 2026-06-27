// WAP to Find LCM of two numbers. 

#include <stdio.h>

int main(){
    int num1, num2, temp, i;

    printf("Enter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);
    
    temp = (num1>num2) ? num1 : num2;

    while(1){
        if(temp % num1 == 0 && temp % num2 == 0) {
            printf("LCM of %d and %d is %d\n", num1, num2, temp);
            break;
        }
        temp++;
    }
    
    return 0;
}