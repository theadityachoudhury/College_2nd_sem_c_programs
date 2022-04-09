#include <stdio.h>
void main()
{
    float p,r,si;
    int t;
    printf("Enter the principle amount:- ");
    scanf("%f",&p);
    printf("Enter the rate of interest:- ");
    scanf("%f",&r);
    printf("Enter the time period in years:- ");
    scanf("%d",&t);
    si = (p*r*t)/100;
    printf("The interest of %d years is %.2f\n",t,si);
    printf("The total amount to be paid is %.2f\n",(si+p));
}