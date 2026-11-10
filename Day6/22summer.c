// WAP to Convert binary to decimal

#include <stdio.h>
#include <math.h>

int main(){
    int bnum, dnum, temp, sum=0, i=0;

    printf("Enter the binary number: ");
    scanf("%d", &bnum);

    temp = bnum;

    while(temp>0){
        int p = pow(2,i);
        int rem = temp%10;
        temp /= 10;
        sum += (p*rem);
        i++;
    }

    printf("%d", sum);
    return 0;
}