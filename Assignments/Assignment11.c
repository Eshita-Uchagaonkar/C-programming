#include<stdio.h>
#include<math.h>
int main() {
    int num,i;
    long long factorial = 1;
    int isprime = 1;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num >= 0)
    printf("Square Root=%.2f\n",sqrt(num));
    else
    printf("Square=%d\n",num*num);
    printf("Cube = %d\n",num*num*num);

    if(num<=1) {
        isprime = 0;

    }
    else{
        for(i=2;i<=num/2;i++) {
            if(num%i==0) {
isprime=0;
break;}
        }
    }
}