#include<stdio.h>
void swapByValue(int a, int b);
void swapByReference(int *a,int *b);
int main() {
    int n1,n2,ch;

    printf("Enter two numbers:\n");
    scanf("%d %d",&n1,&n2);

    printf("\n____Menu:_____\n");
    printf("1. Swap by value\n2. Swap by Reference\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);

    switch(ch) {
        case 1:
        printf("\nBefore swap (Value):n1=%d, n2=%d\n", n1, n2);
        swapByValue(n1, n2); 
        printf("After Swap (Value): n1=%d, n2=%d\n", n1, n2);
        break;

        case 2:
        printf("\nBefore swap(reference): n1=%d,n2=%d\n",n1,n2);
        swapByReference(&n1,&n2);
        printf("After Swap (Reference):n1=%d,n2=%d\n",n1,n2);
        break;

        default:
        printf("Invalid choice\n");
    }
    return 0;
}
void swapByValue(int a,int b) {
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("Inside Function (Value):a=%d,b=%d\n",a,b);
}
void swapByReference(int *a,int *b) {
    int temp;
    temp= *a;
    *a=*b;*b=temp;
}