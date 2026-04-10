#include<stdio.h>


int mainfactorial(int n) {
    int i,fact=1;
    for(i=1;i<=n;i++) {
        fact=fact*i;
    }return fact;
}
float power(float x,int n) {
    float result=1;
    int i;
    for(i=1;i<=n;i++) {
        result=result*x;
    }
    return result;
}
int main() {
    float x,sum=0;
    int n,i,sign=1;

    printf("Enter value of x:");
    scanf("%f",&x);
    printf("Enter number of terms:");
    scanf("%d",&n);

    for(i=1;i<=n;i++) {
        int power_val=2*i-1;
        float term=power(x,power_val)/mainfactorial(power_val);


        sum=sum+sign*term;
        sign=-sign;
    }

    printf("Sum  of sine series=%f",sum);
    return 0;
}
