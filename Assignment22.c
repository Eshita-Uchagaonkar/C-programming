#include<stdio.h>
#include<string.h>
int main() {
    char str1[100],str2[100],temp[100];
    int ch;

    while(1){
        printf("\nString operation\n");
        printf("\n1. Length of string(strlrn)\n2. Copy String(strcpy)\n3. Concatenate Strings(strcat)\n4. Compare String(strcmp)\n5. Reverse String(strrev)\n6. Convert to lowercase(strlwr)\n7. Convert to uppercase(strupr)");
        
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        getchar();

        switch(ch) {
            case 1:
            printf("Enter a string:");
            fgets(str1,sizeof(str1),stdin);
            printf("Length of the string:%zu\n",strlen(str1));
            break;

            case 2:
            printf("Enter source string:");
            fgets(str1,sizeof(str1),stdin);
            strcpy(str2,str1);
            printf("String copied successfull! New string:%s\n",str2);
            break;

            case 3:
            printf("Enter first string:");
            fgets(str1,sizeof(str1),stdin);
            printf("Enter second string:");
            fgets(str2,sizeof(str2),stdin);
            strcat(str1,str2);
            printf("Concatenated string: %s\n",str1);
            break;

            case 4:
            printf("Enter first string:");
            fgets(str1,sizeof(str1),stdin);
            printf("Enter second string:");
            fgets(str2,sizeof(str2),stdin);
            if(strcmp(str1,str2)==0)
            printf("Strings are equal.\n");
            else
            printf("Strings are not equal.\n");
            break;

            case 5:
            printf("Enter a string:");
            fgets(str1,sizeof(str1),stdin);
            printf("Reversed string:%s\n",strrev(str1));
            break;

            case 6:
            printf("Enter a string:");
            fgets(str1,sizeof(str1),stdin);
            printf("Lowercase:%s\n",strlwr(str1));
            break;

            case 7:
            printf("Enter a string:");
            fgets(str1,sizeof(str1),stdin);
            printf("Uppercase: %s\n",strupr(str1));
            break;

            default:
            printf("Invalid");
        }
    }
    return 0;
}