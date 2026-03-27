#include<stdio.h>
struct student {
    int roll;
    char name[50];
    float m1,m2,m3;
    float total,percentage;
};
int main() {
    int n,i;
    printf("Enter number of students:");
    scanf("%d",&n);

    struct student s[n];
    for(i=0;i<n;i++) {
        printf("\nEnter details %d\n",i+1);

        printf("Roll number:");
        scanf("%d",&s[i].roll);

        printf("Nmae:");
        scanf("%s",s[i].name);

        printf("Marks in 3 subjects:");
        scanf("%f %f %f",&s[i].m1,&s[i].m2,&s[i].m3);

        s[i].total=s[i].m1+s[i].m2+s[i].m3;
        s[i].percentage=s[i].total/3;
    }
    printf("\n----Students Result----\n");
    for(i=0;i<n;i++) {
        printf("\nRoll no:%d",s[i].roll);
        printf("\nName:%s",s[i].name);
        printf("\nTotal Marks:%.2f",s[i].total);
        printf("\nPercentage: %.2f%%",s[i].percentage);

        if(s[i].percentage>=50)
        printf("\nResult:Pass\n");
        else
        printf("\nResult:Fail\n");
    }
    return 0;
}