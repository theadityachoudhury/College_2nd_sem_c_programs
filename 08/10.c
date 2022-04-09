#include <stdio.h>

/* Using if else*/

int main()
{
    int a,b,c,d,max;
    printf("Enter first number:- ");
    scanf("%d",&a);
    printf("Enter second number:- ");
    scanf("%d",&b);
    printf("Enter third number:- ");
    scanf("%d",&c);
    printf("Enter fourth number:- ");
    scanf("%d",&d);
    if (a>=b && a>=c && a>=d)
    {
        max = a;
        printf("%d is the largest number!\n",max);
    }
    else if (b>=a && b>=c && b>=d)
    {
        max = b;
        printf("%d is the largest number!\n",max);
    }
    else if (c>=a && c>=b && c>=d)
    {
        max = c;
        printf("%d is the largest number!\n",max);
    }
    else if (d>=a && d>=b && d>=c)
    {
        max = d;
        printf("%d is the largest number!\n",max);
    }
    return 0;
}