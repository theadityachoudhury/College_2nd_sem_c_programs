#include <stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter a number:- ");
    scanf("%d",&a);
    b = a%100;
    if (b<50){
        a-=b;
    }
    else{
        a+=(100-b);
    }
    printf("The value after rounding off is %d",a);
}