#include<stdio.h>

int prime(int n){
    int i,flag=1;
    int t=n/2;
	for(i=2;i<t;i++){
		if(!(n%i)){
			flag=0;
			break;
		}
	}
    return flag;
}
int main(){

	int n,a;
	printf("Enter the number: ");
	scanf("%d",&n);
	a = prime(n);
	if(a) printf("Prime number");
	else printf("Not a Prime number");
	
	return 0;
}