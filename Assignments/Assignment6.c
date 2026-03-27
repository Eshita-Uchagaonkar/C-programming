#include<stdio.h>
unsigned long long factorial_recursive(int n) {
    if(n==0||n==1)
    return 1;
    else
    return n*factorial_recursive(n-1);
}
int main() {
    int n,i;
    unsigned long long fact_loop=1,fact_rec;

    printf("Enter a number:");
    scanf("%d",&n);

    if(n<0) {
        printf("Factorial of a negative number is not defined");
    }
    else {
        //without recursion
        for(i=1;i<=n;i++) {
            fact_loop=fact_loop*i;
        }
        //with recursion
        fact_rec=factorial_recursive(n);
        printf("\nFactorial using loop=%llu",fact_loop);
        printf("\nFactorial using recursion=%llu",fact_rec);
    }
    return 0;
}