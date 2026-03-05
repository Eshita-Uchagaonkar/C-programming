#include<stdio.h>
int main() {
    int choice;
    int c;
    double num1,num2,result;
    int n,i,fact;
    printf("\n-------Sample Calculater-----\n");
    printf("1.Addition\n");
    printf("2.Substraction");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Power(x^y)\n");
    printf("6.Factorial\n");
    printf("Enter your choice(1-6)");
    scanf("%d",&choice);

    switch(c) {
        case1:
        printf("Enter Two numbers:");
        scanf("%lf %lf",&num1,&num2);
        printf("Result=%.2lf",num1+num2);
        break;
        
        case2:
        printf("Enter two number:");
        scanf("%lf %lf",&num1,&num2);
        printf("Result=%.2lf,num1-num2");
        break;

        case3:
        printf("Enter two numbers:");
        scanf("%lf %lf",&num1,&num2);
        printf("Result= %.2f",num1*num2);

        case4:
        printf("Enter two number:");
        scanf("%lf %lf",num1,num2);
        printf("Result: %.2f",num1/num2);

        case5:
        printf("Enter base and exponent:");
        scanf("%lf %lf",&num1,&num2);
        result=1;
        i=1;
        while (i<=(int)num2) {
            result = result*num1;
            i++;
        }
        printf("Result= %.2f",result);
        break;

        case6:
        printf("Enter a number:");
        scanf("%d",&n);
        if (n<0) {
            printf("Factorial not defined for negative numbers.");
        }
        else {
            fact=1;
            i=1;

        while (i<=n) {
            fact=fact*i;
            i++;
        }
        printf("Factorial= %d",fact);
        }
        break;
        default:
        printf("Invalid Choice!");
    }
    return 0;
}