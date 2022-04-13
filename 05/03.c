#include<stdio.h>

int main(){

    int p,q,r,s;
    printf("Enter the value of first resistance:- ");
    scanf("%d",&p);
    printf("Enter the value of second resistance:- ");
    scanf("%d",&q);
    printf("Enter the value of third resistance:- ");
    scanf("%d",&r);
    printf("Enter the value of fourth resistance:- ");
    scanf("%d",&s);

    if(p*s==r*q){
        printf("Resistance are equivalent");
        return 0;
    }
    else{
    printf("Resistance isn't equivalent");}
    s=(int)r*q/p;
    printf("Resistance value of s: %d",s);
    return 0;
}