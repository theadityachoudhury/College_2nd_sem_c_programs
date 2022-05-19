// Finding the length of the string
#include<stdio.h>

int main(){

    int i;
    char s[100];
    printf("Enter the string: ");
    scanf("%[^\n]s",s);
    for(i=0; s[i]; ++i);
    printf("The length is:  %d",i);
    return 0;
}