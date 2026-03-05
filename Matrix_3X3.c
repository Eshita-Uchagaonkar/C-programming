#include<stdio.h>
int main() {
    int a[3][3] , b[3][3] , result[3][3],i,j,choice;
    printf("Enter numbers for first matrix\n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter number for second matrix\n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++); {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nChoose Operation\n");
    printf("1.Addition\n");
    printf("2.Substraction\n");
    printf("Enter your choice");
    scanf("%d",&choice);

    switch(choice) {
        case1:
        printf("\nResult of Addition:\n");
        for(i=0;i<3;i++) {
            for(j=0;j<3;j++); {
                result[i][j]=a[i][j]+b[i][j];
                printf("%d",result[i][j]);
            }
            printf("\n");
        }
        break;

        case2:
        printf("\nResult of substraction is:\n");
        for(i=0;i<3;i++) {
            for(j=0;j<3;j++) {
                result[i][j]=a[i][j]-b[i][j];
                printf("%d",result[i][j]);
            }
            printf("\n");
        } break;

        default:
        printf("Invalid Choice");
    }
    return 0;

}