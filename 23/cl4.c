#include<stdio.h>
void main(){
    FILE *fp;
    char ch;
    int noc=0,nob=0,not=0,non=0;
    fp = fopen("cl1.c","r");
    while ((ch=fgetc(fp))!=EOF)
    {
        noc++;
        if (ch==' ') nob++;
        if (ch=='\t') not++;
        if (ch=='\n') non++;
    }
    printf("%d %d %d %d",noc,nob,not,non);
    fclose(fp);
    
}