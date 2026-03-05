#include<stdio.h>
struct student {
    int PRN;
    char name[30];
    float m1,m2,m3,avg;
};
int main() {
    struct student s[5];
    int i;
    for(i=0;i<5;i++) {
        printf("\nEnter details of students %d\n",i+1);
        printf("Enter PRN number:");
        scanf("%d",&s[i].PRN);

        printf("Enter Name:");
        scanf("%s",s[i].name);

        printf("Enter marks of 3 subject:");
        scanf("%f %f %f",&s[i].m1,&s[i].m2,&s[i].m3);
        s[i].avg=(s[i].m1+s[i].m2+s[i].m3)/3;
    }
    printf("\nStudent Details with average:\n");
    for(i=0;i<5;i++) {
        printf("\nStudent %d\n",i+1);
        printf("PRN number: %d\n",s[i].PRN);
        printf("Name: %s\n",s[i].name);
        printf("Average Marks: %.2f\n",s[i].avg);
    }
    return 0;
}
