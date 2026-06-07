// WAP to print prime numbers in a range 

#include <stdio.h>
int main(){
    int num1, num2, i, j, count;

    printf("Enter the first number of the range: ");
    scanf("%d", &num1);

    printf("Enter the second number of the range: ");
    scanf("%d", &num2);

    if(num1 < num2 && num1>=0 && num2>=0){
        printf("The entered range is (%d, %d). \n", num1, num2);
        for(i=num1; i<num2; i++){
        count=0;
        
        for(j=2; j<=i/2; j++){

            if(i == 1){
            continue;
            }

            else if(i%j == 0){
            count++;
            break;
            }
            
            else
            continue;
        }
        if(count==0)
        printf("%d\t", i);
    }
    }
    else
        printf("The entered range is not valid. \n");

    
}