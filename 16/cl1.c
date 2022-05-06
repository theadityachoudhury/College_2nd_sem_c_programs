#include<stdio.h>
int main(){
    int b[2][2] = {1,2,3,4};
    printf("%d\n",*&b);
    printf("%d\n",&b);
    printf("%d\n",&b+1);
    printf("%d\n",*b);
    printf("%d\n",**b+1);
    printf("%d\n",b);
}