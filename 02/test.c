#include <stdio.h>
#define sqr(a) a*a
#define inc(b) b+1
int main(){
    int p,q,r;
    p = sqr(3-1);
    q = inc(2)*sqr(4);
    r = inc(4+1)*sqr(2+2);
    printf("%d %d %d",p,q,r);
    return 0;
}