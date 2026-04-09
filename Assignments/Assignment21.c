#include<stdio.h>
int main() {
    FILE *source,*target;
    char ch;
    source=fopen("source.txt","r");
    if(source==NULL) {
        printf("Error:source file not found!\n");
        return 1;
    }
    target=fopen("target.txt","w");
    
    while ((ch=fgetc(source))!=EOF) {
        fputc(ch,target);
    }
     fclose(source);
    fclose(target);

    printf("file copied.\n");
    
    return 0;
}