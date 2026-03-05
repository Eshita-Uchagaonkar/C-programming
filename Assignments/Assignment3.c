#include<stdio.h>
int main() {
    int i,n,m;
    i=1;
    printf("Enter number");
    scanf("%d",&n);
    do
    {
        m=n*i;
        printf("%d\n",m);
        printf(" ");
        i=i+1;

    }
    while (i<=10);
    return(0);
}