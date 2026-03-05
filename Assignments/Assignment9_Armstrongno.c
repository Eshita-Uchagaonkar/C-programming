#include<stdio.h>
int main() {
    int num,temp,a,result=0;
    printf("Enter a three digit number:");
    scanf("%d",&num);
    temp=num;
    while(temp !=0) {
        a=temp%10;
        result += a*a*a;
        temp=temp/10;
    }
    if (result ==num)
    printf("%d is an Armstrong number",num);
    else
    printf("%d is not an Armstrong number",num);
    
    return 0;
}






