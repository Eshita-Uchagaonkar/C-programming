#include<stdio.h>
int main() {
    float basicpay,hra,ta,gross,pt,netsalary;
    printf("Enter the basic pay ");
    scanf("%f",&basicpay);
    hra=0.10*basicpay;
    ta=0.05*basicpay;
    gross=basicpay+hra+ta;
    pt=0.02*gross;
    netsalary=gross-pt;

    printf("\n-----Salary Slip-----\n");
    printf("Basic Pay: %.2f\n",basicpay);
    printf("HRA:  %.2f\n",hra);
    printf("ta: %.2f\n",ta);
    printf("Gross Salary: %.2f\n",gross);
    printf("PT: %.2f\n",pt);
    printf("Net Salary: %.2f\n",netsalary);
    return 0;
}