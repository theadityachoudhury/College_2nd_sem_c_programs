#include <stdio.h>
void main()  {
    int m,a,tm;
    printf("Enters the marks:- ");
    scanf("%d",&m);
    printf("Enter your age:- ");
    scanf("%d",&a);
    if (0<a<50){
        printf("Total marks is : %d",tm+60);
    }
    else{
        printf("Total Marks is : %d",tm+40);
    }
}