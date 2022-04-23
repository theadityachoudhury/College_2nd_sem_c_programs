#include <stdio.h>
void pp(int n){
    for (int i = 0; i < n; i++)
    {
        printf("=");
    }
    printf("\n");
    
}
void main(){
    int n;
    printf("Enter the number of '=' to be printed:- ");
    scanf("%d",&n);
    pp(n);
}