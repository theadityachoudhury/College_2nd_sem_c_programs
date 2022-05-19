#include <stdio.h>

int main(void) {
	// your code goes here
    int t,n,s,z;
    scanf("%d",&t);
    if (t>0 && t<=1000){
        while (t--){
            scanf("%d %d",&n,&s);
            if (n>0 && n<=100000 && s>0 && s<=200000){
                z = (n-s);
                if (z<0) z*=(-1);
                printf("%d\n",n-z);
            }
        }
    }
	return 0;
}

