#include<stdio.h>
void main(){
    int a=20,b=6;
    int p,q;
    p=--a-b;
    q=--p+p;
    printf("p = %d and q = %d",p,q);
}