#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {
    char str[20];
    int i,j,n;
    printf("Enter a string:");
    scanf("%s",str);
    n=strlen(str);
    int total=pow(2,n);
    printf("Subset are:\n");
    for(i=0;i<total;i++) {
        for(j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                printf("%c",str[j]);
            }
        }
        printf("\n");
    }
    return 0;
} 
