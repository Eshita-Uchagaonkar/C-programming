#include<stdio.h>
int main() {
    int A[10][10], B[10][10], C[10][10];
    int i,j,r, c ,choice;
    printf("Enter rows and columns:");
    scanf("%d %d",&r,&c);

    printf("Enter matrix A:\n");
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    scanf("%d",&A[i][j]);

    printf("Enter Matrix B:\n");
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    scanf("%d",&B[i][j]);

    printf("\n1.Addition\n2. Saddle point\n3. Inverse(2x2)\n4. Magic Square\n");
    printf("Enter your choice:");
    scanf("%d",&choice);

    switch(choice) {
        case1:
        printf("Addition of matrices: \n");
        for (i=0;i<r;i++){
            for(j=0;j<c;j++) {
                C[i][j]=A[i][j]+B[i][j];
                printf("%d",C[i][j]);
            }
            printf("\n");
        }
        break;

        case2: {
            int found=0;
            for(i=0;i<r;i++) {
                int min=A[i][0], col=0;
                for(j=1;j<c;j++) {
                    if(A[i][j]<min) {
                        min=A[i][j];
                        col=j;
                    }
                }
                int k;
                for(k=0;k<r;k++) {
                    if(A[k][col]>min)
                    break;
                }
                if(k==r) {
                    printf("Saddle Point=%d\n",min);
                    found=1;
                }
            }
            if(!found)
            printf("No Saddle Point\n");
            break;
        }
        case3: 
        if(r==2 &&c==2) {
            float det;
            det=A[0][0]*A[1][1]-A[0][1]*A[1][0];
            if(det==0) {
                printf("Inverse not possible\n");
            }
            else {
                printf("Inverse Matrix:\n");
                printf("%.2f %.2f\n",A[1][1]/det,-A[0][1]/det);
                printf("%.2f %.2f\n",-A[1][0]/det,A[0][0]/det);
            }
        }
        else {
            printf("Inverse only for 2x2 matrix\n");
        }
        break;

        case 4: {
            int sum=0,magic=1;
            for(j=0;j<c;j++)
            sum+=A[0][j];
            for(i=0;i<r;i++) {
                int rowsum=0;
                for(j=0;j<c;j++)
                rowsum+=A[i][j];

                if(rowsum!=sum)
                magic=0;
            }
            for(j=0;j<c;j++) {
                int colsum=0;
                for(i=0;i<r;i++)
                colsum+=A[i][j];
                if(colsum!=sum)
                magic=0;
            }
            if(magic)
            printf("Matrix is Magic Square\n");
            else
            printf("Not a Magic Square\n");
            break;
        }
        default:
        printf("Invalid choice");
    }
    return 0;
}