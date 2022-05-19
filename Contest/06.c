#include <stdio.h>

int main(void) {
	int t,a,b,x;
	scanf("%d",&t);
	if (t>0 && t<=21000){
        while (t--){
            scanf("%d %d %d",&a,&b,&x);
            if (a>=100 && a<=b && b<=200 && x>=1 && x<=50){
                printf("%d\n",((b-a)/x));
            }
            }
	}
	return 0;
}

