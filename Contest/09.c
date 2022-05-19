#include<stdio.h>
int main(){
    int t,n,x,s,r,max=0;
    scanf("%d",&t);
    if (t>0 && t<11){
        while (t--)
        {
            scanf("%d %d",&n,&x);
            if (n>0 && n<50000 && x>0 && x<1000000000){
                while (n--)
                {
                    scanf("%d %d",&s,&r);
                    if (s<=x){
                        if (r>max) max =r;
                    }
                }
                printf("%d\n",max);     
            }
        }
        
    }
    return 0;
}