#include<stdio.h>
void main(){
    int t,n,a,b,c;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d %d %d %d",&n,&a,&b,&c); 
        if (a+c>=n && b>=n) printf("YES");
        else printf("NO");
    }
}