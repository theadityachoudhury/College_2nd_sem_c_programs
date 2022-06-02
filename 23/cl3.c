#include<stdio.h>
void main(){
    FILE *fp;
    char ch;
    fp = fopen("cl1.c","r");
    while((ch=fgetc(fp))!=EOF) printf("%c",ch);
    fclose(fp);
}