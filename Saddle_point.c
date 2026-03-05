#include<stdio.h>
int main() {
    int a[2][2];
    int i,j,k;
    int found=0;
    printf("Enter 4 number\n");
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    scanf("%d",&a[i][j]);

    for(i=0;i<2;i++) {
        int min=a[i][0];
        int col=0;
        for(j=0;j<2;j++) {
            if(a[i][j]<min) {
                min=a[i][j];
                col=j;
            }
        }
        for(k=0;k<2;k++) {
            if(a[k][col]>min)
            break;
        }
        if(k==2) {
            printf("Saddle point=%d\n,min");
            found=1;
        }
    }
    if(!found)
    printf("No Saddle Point\n");
    
    return 0;
}