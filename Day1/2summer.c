// WAP to prinnt multiplication table of a given number 

#include <stdio.h>

int main(){

    int num, i, val;
    printf("Enter the number :");
    scanf("%d", &num);

    for(i=1; i<=10; i++){
        val = i*num;
        printf("%d x %d = %d \n", num, i, val);
    }

    return 0;
}