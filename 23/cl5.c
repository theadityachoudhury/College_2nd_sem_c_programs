#include<stdio.h>
void main(){
    FILE *fp;
    char ch;
    int count=0;
    fp = fopen("gg.txt","r");
    while ((ch=fgetc(fp))!=EOF)
    {
        if (ch=='a') count++;
    }
    printf("%d",count);
    fclose(fp);
    
}