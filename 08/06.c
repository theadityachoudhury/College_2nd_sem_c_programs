#include <stdio.h>
void main()
{   int p;
    char u;
    printf("Username:- ");
    scanf("%c",&u);
    printf("Password:- ");
    scanf("%d",&p);
    if (u=='a'){
        if (p==12345){
            printf("Login Successful!");
        }
        else{
            printf("Your password is incorrect!");
        }
    }
    else{
        printf("Your username is incorrect!");
    }
}