#include<stdio.h>
void main(){
    char s[6],d[6];
    int i;
    printf("Enter the string:");
    scanf("%s",s);

    for(i=0; s[i]; i++)
        d[i] = s[i];
    d[i] = '\0';
    printf("The source:  %s\n",s);
    printf("The destination:  %s",d);
}