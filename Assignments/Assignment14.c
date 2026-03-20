#include<stdio.h>
int main() {
    long int binary;
    int decimal=0,base=1,remainder;

    printf("Enter a binary number:\n");
    scanf("%ld",&binary);

    while(binary>0) {
        remainder=binary % 10;
        decimal=decimal+remainder*base;
        base=base*2;
        binary=binary/10;
    }
    printf("Decimal number= %d",decimal);
    return 0;
}