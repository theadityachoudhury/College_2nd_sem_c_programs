#include <stdio.h>
void main()
{
    int a;
    printf("Enter a number:- ");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("%d is an even number.",a);
    }
    else{
        printf("%d is an odd number.",a);
    }
    
}