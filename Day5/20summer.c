// WAP to find the largest prime factor 

#include <stdio.h>

int main(){
    int num, temp, i, var, max=1, count;

    printf("Enter the number to find the largest prime factor : ");
    scanf("%d", &num);

    temp = num;
    printf("\nThe factors of the given number are : \n");

    for(i=1; i<=num; i++){
        if(temp%i == 0){
    
            printf("%d\t", i);
            var = i;
            count = 0;
            for(int j=2; j<var; j++){
                if(var % j == 0){
                    count++;
                    break;
                }
                else
                continue;
            }

            if(count == 0 && max < i){
                max = i;
                // printf("MAX = %d\n", i);
            }

            else
            continue;
        }

        else 
        continue;
    }
    printf("\nThe largest prime factor of %d is %d", num, max);
    
    return 0;
}