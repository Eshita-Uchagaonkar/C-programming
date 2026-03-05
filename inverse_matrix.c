#include<stdio.h>
int main() {
    float a[2][2],det;
    printf("Enter number for 2X2 matrix\n");
    scanf("%f %f %f %f",&a[0][1],&a[0][1],&a[1][0],&a[1][1]);
    det=a[0][0]*a[1][1]-a[0][1]*a[1][0];
    if(det==0) {
        printf("Inverse does not exist ");
    }
    else {
        printf("Inverse Matrix:\n") ;
            printf("%.2f %.2f\n",
                a[1][1]/det,
                -a[0][1]/det) ;
            printf("%.2f %.2f\n",
                -a[1][0]/det,
                a[0][0]/det) ;
    }
    return 0;
}