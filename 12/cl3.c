#include<stdio.h>

int leap(int n){
    if((n%4==0) && ((n%400==0) || (n%100!=0))) return 1;
    else return 0;  
}
void main(){

    int y,ans;
    printf("Enter the year: ");
    scanf("%d",&y);
    ans = leap(y);
    if (ans==1) printf("%d is a leap year!",y);
    else printf("%d is not a leap year!",y);
}