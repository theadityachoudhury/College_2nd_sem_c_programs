#include<stdio.h>
void month(n){
    char string[12][10] = {{"January"},{"February"},{"March"},{"April"},{"May"},{"June"},{"July"},{"August"},{"September"},{"October"},{"November"},{"December"}};
    printf("%s",string[n-1]);
}


int main(){
    int m;
    scanf("%d",&m);
    if (m>0 && m<13){
        month(m);
    }
    else printf("Please enter correct month!");
    return 0;
}