#include<stdio.h>

int SOD(int num){
    if (num == 0) return 0;
    else return ((num%10)+SOD(num/10));
}

void main(){
    int num,sum;
    printf("Enter a number:- ");
    scanf("%d",&num);

    sum = SOD(num);
    printf("The sum of the number of the digit is %d",sum);
}