#include<stdio.h>
int main()  {
    int a[1],b[1],c[1];
    int i;
    printf("Enter Value for first array;\n");
    for(i=0;i<1;i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter Value for second array;\n");
    for (i=0;i<1;i++) {
        scanf("%d",&b[i]);
    }
    for (i=0;i<1;i++) {
    c[i]=a[i]+b[i];
    }
    printf("Addition of 2 array is:");
    for (i=0;i<1;i++) {
        printf("%d",c[i]);
    }
    return(0);
}