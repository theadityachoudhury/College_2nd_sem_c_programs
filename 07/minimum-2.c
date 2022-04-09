#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter the value of a:- ");
    scanf("%d",&a);
    printf("ENter the value of b:- ");
    scanf("%d",&b);
    if (a>b){
        printf("%d is greater than %d",a,b);
    }
    else{
        printf("%d is greater than %d",b,a);
    }
}