#include<stdio.h>
int main() {
    int a[10][10],n;
    int i,j,sum=0,flag=1;
    printf("Enter order of square matrix:");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);

    for(j=0;j<n;j++)
    sum+=a[0][j];

    for(i=1;i<n;i++) {
        int rowsum=0;
        for(j=0;j<n;j++)
        rowsum+=a[i][j];
        if(rowsum!=sum)
        flag=0;
    } 
    for(j=0;j<n;j++) {
        int colsum=0;
        for(i=0;i<n;i++)
        colsum+=a[i][j];
        if(colsum!=sum)
        flag=0;
    }
    int d1=0,d2=0;
    for(i=0;i<n;i++) {
        d1+=a[i][j];
        d2+=a[i][n-i-1];
    }
    if(d1!=sum|| d2!=sum)
    flag=0;

    if(flag)
    printf("It is a Magic Square");

    else
    printf("Not a Magic Square");

    return 0;

}    