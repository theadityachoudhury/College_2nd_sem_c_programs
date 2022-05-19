#include<stdio.h>
int main(){
    int x1[100],y,n,n1;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        y = 0;
        scanf("%d",&n1);

        for (int x=0;x<n1; x++){
            scanf("%d", &x1[x]);
            if (x1[x]>0){
            if (x1[x]>=1000) y++;}
        }
        printf("%d\n",y);
        
        
    }
    
    return 0;
}
