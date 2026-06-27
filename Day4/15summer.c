// WAP to check Armstrong number

#include <stdio.h>
#include <math.h>

int main(){
    
    int num, temp, i, count=0, rem, sum=0;
    printf("Enter the number to check if armstrong number : ");
    scanf("%d", &num);

    temp = num;

    while(temp>0){
        temp = temp/10;
        count++;
    }

    printf("Count : %d\n", count);
    temp = num; 

    while(temp>0){
        rem = temp%10;
        temp = temp/10;
        
        double p = pow(rem, count);
        
        sum += (int)p;

    }

    if(sum == num)
    printf("\nThe given number %d is an Armstrong number.", num);

    else
    printf("\nNot an Armstrong number.");

    return 0;
}