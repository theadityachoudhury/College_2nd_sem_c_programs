#include <stdio.h>
void main()  {
    int m,a,tm;
    printf("Enters the marks:- ");
    scanf("%d",&m);
    printf("Enter your age:- ");
    scanf("%d",&a);
    if (0<a<50){
        printf("Total marks is : %d",m+60);
    }
    else{
        printf("Total Marks is : %d",m+40);
    }
}