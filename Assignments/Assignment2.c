#include<stdio.h>


int main() {
    float a,b;
    int c;
    printf("Enter two no ");
    scanf("%f %f" , &a,&b );
    printf("\nChoose\n");
    printf("1.add\n2.Substraction\n3.multiplication\n4.Divide\n");
    printf("Choose");
    scanf("%d",&c);

    switch(c)
    {case 1:
    printf("%.2f",a+b);
    break;

    case 2:
    printf("%.2f",a-b);
    break;

    case 3 :
    printf("%.2f",a*b);
    break;

    case 4 :
    printf("%.2f",a/b);
    break;

    default:
    printf("wrong");
    }
    return(0);
}