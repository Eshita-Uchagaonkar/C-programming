#include<stdio.h>
int main() {
    int i,n;
    i=1;
    printf("Enter number");
    scanf("%d",&n);
    do{
        printf("%d\n",n*i);
        i=i+1;
    }
    while (i<=10);
    return 0;
}