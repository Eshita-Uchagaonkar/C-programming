#include<stdio.h>
#include<stdlib.h>
int main() {
    int i;
    printf("Pseudo random numbers are:\n");
    for(i=0;i<5;i++) {
        printf("%d",rand());
    }
    return 0;
}