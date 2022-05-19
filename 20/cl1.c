// // Copying from sorce string to destination string

#include<stdio.h>
void main(){
    char s[100],d[100];
    int i;
    printf("Enter the string: ");
    scanf("%s",s);

    for(i=0; s[i]; i++)
        d[i] = s[i];
    d[i] = '\0';
    printf("The destination:  %s",d);
}



#include<stdio.h>
void main(){
    char s[100],d[100];
    int i=0;
    printf("Enter source string:- ");
    scanf("%s",s);
    while (s[i])
    {
        d[i]=s[i];
        i++;
    }
    d[i]='\0';
    printf("%s",d);
    
}