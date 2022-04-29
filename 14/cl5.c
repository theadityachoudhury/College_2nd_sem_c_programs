#include<stdio.h>
void oe(int a){
    if (a%2==0) printf("%d is an even number\n",a);
    else printf("%d is an odd number!\n",a);
}

int prime(int n){
    int i,flag=1;
    int t=n/2;
	for(i=2;i<t;i++){
		if(!(n%i)){
			flag=0;
			break;
		}
	}
    if (flag==1) printf("%d is a prime number!\n",n);
    else printf("%d is not a prime number!\n",n);
}

void main(){
    int arr[20];
    for (int i = 0; i < 20; i++)
    {
        printf("Enter %d number:- ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 20; i++)
    {
        oe(arr[i]);
        prime(arr[i]);
    }
    
    
}