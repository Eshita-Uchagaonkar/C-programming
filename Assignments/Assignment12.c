#include<stdio.h>
int main() {
    int n1,n2,i,min,gcd=1, scd=0;
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);

    if(n1<n2)
    min=n1;
    else
    min=n2;

    for(i=2;i<=min;i++) {
        if(n1%i==0&&n2%1==0) {
            scd=i;
        break;}
    }
    for(i=1;i<=min;i++) {
        if(n1%i==0&&n2%i==0) {
            gcd=i;
        }
    }
    if(scd!=0)
    printf("Smallest common devisor=%d\n",scd);
    else
    printf("No common divisor other than 1 exists.\n");

    printf("Greatest common devisor =%d\n",gcd);

    return 0;
}