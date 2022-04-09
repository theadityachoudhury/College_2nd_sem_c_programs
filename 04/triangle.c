#include <stdio.h>
void main()
{
    float a,b,c;
    int d;
    printf("Enter the value of first side:- ");
    scanf("%f",&a);
    printf("Enter the value of first side:- ");
    scanf("%f",&b);
    printf("Enter the value of first side:- ");
    scanf("%f",&c);
    d = (((a+b)>c)+((b+c)>a)+((c+a)>b))/3;
    printf("Do they satisfy the triangle property? 1 for yes and 0 for no:%d",d);
}