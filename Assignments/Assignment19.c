#include<stdio.h>
#include<string.h>

struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender[10];
    char doj[20];
    float salary;
};

void totalemployees(int n);
void countgender(struct EMPLOYEE emp[],int n);
void salaryabove10000(struct EMPLOYEE emp[],int n);
void asstmanager(struct EMPLOYEE emp[],int n);

int main() {
    int n,i;

    printf("Enter number of employees:");
    scanf("%d",&n);

    struct EMPLOYEE emp[n];

    for(i=0;i<n;i++) {
        printf("\nEnter details of employee %d\n",i=1);

        printf("Name:");
        scanf("%s",emp[i].name);
        printf("\nDesignation:\n");
        scanf("%s",emp[i].designation);
        printf("\nGender:");
        scanf("%s",emp[i].gender);
        printf("\nDate of Joining:");
        scanf("%s",emp[i].doj);
        printf("\nSalary:");
        scanf("%f", &emp[i].salary);
    }
    totalemployees(n);
    countgender(emp,n);
    salaryabove10000(emp,n);
    asstmanager(emp,n);
    return 0;
}
void totalemployees(int n) {
    printf("\nTotal number of employees=%d\n",n);
}
void countgender(struct EMPLOYEE emp[],int n) {
    int male=0,female=0,i;
    for(i=0;i<n;i++) {
        if(strcmp(emp[i].gender,"male")==0||strcmp(emp[i].gender,"female")==0)
        male++;
        else
        female++;
    }
    printf("\nMale Employees=%d\n",male);
    printf("\nFemale Employees=%d\n",female);
}
void salaryabove10000(struct EMPLOYEE emp[],int n) {
    int i;
    printf("\nEmployees with salary more than 10000:\n");
    for(i=0;i<n;i++) {
        if(emp[i].salary>10000) {
            printf("%s\n",emp[i].name);
        }
    }
}
void asstmanager(struct EMPLOYEE emp[],int n) {
    int i;
    printf("\nEmployees with designation Asst Manager:\n");
    for(i=0;i<n;i++) {
        if(strcmp(emp[i].designation,"Asst Manager")==0) {
            printf("%s\n",emp[i].name);
        }
    }
}