// WAP to print Armstrong numbers in a range 

#include <stdio.h>
#include <math.h>

int main(){
    int num1, num2, count=0, i, temp, rem, sum=0;

    printf("Enter the range : ");
    scanf("%d %d", &num1, &num2);

    for(i = num1; i <= num2; i++){
        temp = i;
        count = 0;
        sum=0;
        while(temp>0){
            temp /= 10;
            count++;
        }
        // printf("Count = %d, i = %d\n", count, i);

        temp = i;

        while(temp>0){
            rem = temp%10;
            temp = temp/10;
            
            double p = pow(rem, count);
            
            sum += (int)p;

        }
        // printf("SUM = %d", sum);
    if(sum == i)
    printf("%d \t", i);

    else
        continue;

    }
}