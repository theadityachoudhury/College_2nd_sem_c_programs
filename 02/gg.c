#include <stdio.h>
void main()
{
    int a,b,c;
    float avg;
    printf("Enter first number:- ");
    scanf("%d",&a);
    printf("Enter second number:- ");
    scanf("%d",&b);
    printf("Enter third number:- ");
    scanf("%d",&c);
    avg = (float)(a+b+c)/3;
    printf("Average of %d %d and %d is %f",a,b,c,avg);
}   