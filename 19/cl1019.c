#include <stdio.h>

int leap_year(int year){
    if (year%4==0){
        if (year%100==0){
            if (year%400==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 1;
        }
    }
    else{
        return 0;
    }
}


void main()
{
    int a,c;
    printf("Enter a year:- ");
    scanf("%d",&a);
    c = leap_year(a);
    if (c) printf("%d is a leap year",a);
    else printf("%d is not a leap year",a);
}