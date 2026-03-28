#include<stdio.h>
#include<string.h>
int main() {
    char str1[100],str2[100],temp[100];
    int length,i;

    printf("Enter a string:");
    scanf("%s",str1);

    length=strlen(str1);
    printf("\nLength of string:%d",length);
    printf("Reversed string:");
    for(i=length-1;i>=0;i--) {
        printf("%c",str1[i]);}

    
    printf("\nEnter another string for comparison:");
    scanf("%s",str2);
    if(strcmp(str1,str2)==0)
    printf("\nStrings are equal");
    else
    printf("\nNot equal\n");
    
    if(strcmp(str1,temp)==0)
    printf("\nString is a palindrome");
    else
    printf("\nString is not a palindrom");

    if(strstr(str1,str2)!=NULL)
    printf("\nSecond string is a substring");
    else
    printf("\nSecond string is not a substring");

return 0;
}
