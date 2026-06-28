#include <stdio.h>

int main(){
    int num, i, var, rem, sum;
    
    printf("Enter the number : ");
    scanf("%d", &num);

    var = num;

    while(var>0){
        rem = var%10;
        var = var/10;
        
        sum += rem;
    }

    printf("The sum of digits in %d is %d", num, sum);

    return 0;  
}