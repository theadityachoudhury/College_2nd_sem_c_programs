#include<stdio.h>

void main()
{
    int a,b,c,d;
    printf("Enter first number:- ");
    scanf("%d",&a);
    printf("Enter second number:- ");
    scanf("%d",&b);
    printf("Enter third number:- ");
    scanf("%d",&c);
    printf("Enter fourth number:- ");
    scanf("%d",&d);

    if (a>=b && a>=c && a>=d){
        if (b>=c && b>=d){
            printf("%d is the 2nd largest number",b);
        }
        else if (c>=b && c>=d){
            printf("%d is the 2nd largest number",c);
        }
        else{
            printf("%d is the 2nd largest number",d);
        }
    }
    else if (b>=a && b>=c && b>=d){
        if (a>=c && a>=d){
            printf("%d is the 2nd largest number",a);
        }
        else if (c>=a && c>=d){
            printf("%d is the 2nd largest number",c);
        }
        else{
            printf("%d is the 2nd largest number",d);
        }
    }
    else if (c>=a && c>=b && c>=d){
        if (a>=b && a>=d){
            printf("%d is the 2nd largest number",a);
        }
        else if (b>=a && b>=d){
            printf("%d is the 2nd largest number",b);
        }
        else{
            printf("%d is the 2nd largest number",d);
        }
    }
    else{
        if (a>=b && a>=c){
            printf("%d is the 2nd largest number",a);
        }
        else if (b>=a && b>=c){
            printf("%d is the 2nd largest number",b);
        }
        else{
            printf("%d is the 2nd largest number",c);
        }
    }
}