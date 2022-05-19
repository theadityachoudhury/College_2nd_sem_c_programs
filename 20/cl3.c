//Frequency of a character

#include<stdio.h>

int main(){

    int i,count=0;
    char s[100],ch;
    printf("Enter the string: ");
    scanf("%[^\n]s",&s);
    printf("Enter the character: ");
    scanf(" %c",&ch);

    for(i=0; s[i]; i++){
        if(s[i]== ch){
            count++;
        }}
    
    printf("The frequency of %c is:  %d",ch,count);
    return 0;
}