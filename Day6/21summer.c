// WAP to convert decimal number to binary number 

#include <stdio.h>
#include <math.h>

int main(){
    int dnum, temp;
    int bits[32];
    int x = 0;

    printf("Enter the decimal number : ");
    scanf("%d", &dnum);

    if (dnum == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    temp = dnum;
    while (temp > 0) {
        bits[x++] = temp % 2;
        temp /= 2;
        // printf("X = %d", x);
    }

    printf("\n");
    printf("Binary: ");
    for (int i = x - 1; i >= 0; i--) {
        printf("%d", bits[i]);
    }


    return 0;
}