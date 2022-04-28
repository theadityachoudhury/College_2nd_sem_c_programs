#include<stdio.h>
int fibonacci(int i){
    if (i==0) return 0;
    else if (i==1) return 1;
    else return (fibonacci(i-1) + fibonacci(i-2));
}

void main(){
    int num;
    printf("Enter a number:- ");
    scanf("%d",&num);
    printf("The fibonacci series is:- ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ",fibonacci(i));
    }
    
}