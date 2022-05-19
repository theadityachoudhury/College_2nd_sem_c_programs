#include<stdio.h>
void main(){
    int x,y,z;
    scanf("%d %d",&x,&y);
    if (x>0 && y>0 && x<=1000 && y<=1000){
        z = x-y;
        printf("%d",z);
    }
}
