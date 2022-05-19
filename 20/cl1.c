// Copying from sorce string to destination string

#include<stdio.h>
void main(){
    char s[100],d[100];
    int i;
    printf("Enter the string: ");
    scanf("%[^\n]s",s);

    for(i=0; s[i]; i++)
        d[i] = s[i];
    d[i] = '\0';
    printf("The destination:  %s",d);
}