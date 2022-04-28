#include<stdio.h>

int count(int q,int c){
    if (q==0){
        return c;
    }
    else{
        c+=1;
        count(q/10,c);
    }
}
void main(){
    int num,cn=0;
    printf("Enter a number:- ");
    scanf("%d",&num);
    printf("%d has %d digits!",num,count(num,cn));
}