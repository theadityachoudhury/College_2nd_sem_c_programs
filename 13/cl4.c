#include<stdio.h>
int factorial(int q){
    if (q==0){
        return 1;
    }
    else{
        return (q*(factorial(q-1)));
    }
}

void main(){
    int num;
    printf("Enter a number:- ");
    scanf("%d",&num);
    printf("The factorial of %d is %d",num,factorial(num));
}