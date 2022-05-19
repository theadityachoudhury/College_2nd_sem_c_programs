#include<stdio.h>
int main(){
    int t,w,x,y,z;
    scanf("%d",&t);
    if (t>0 && t<1001){
    while (t--)
    {
        scanf("%d %d %d %d",&w,&x,&y,&z);
        if (w>0 && w<1001 && x>0 && x<1001 && y>0 && y<1001 && z>0 && z<1001){
        int a = (w+(y*z));
        if (a>x){ printf("overflow\n");}
        else if (a<x) {printf("unfilled\n");}
        else {printf("filled\n");}
        }
    }}
    return 0;
}