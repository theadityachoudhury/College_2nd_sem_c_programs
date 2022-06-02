#include<stdio.h>


int prime(int x,int y,int* arr){
	int n,j,i,pos=0;
	for(i=x;i<y;i++){
		int flag = 1;
		n=i/2;
		for(j=2;j<=n;j++){
			if(!(i%j)){
				flag =0;
				break;
			}
		
		}
		if (flag)
			arr[pos++] = i;
}
return pos;
}


int main(){

	int n,i,j,t,c,arr1[1000];
	scanf("%d %d",&c,&t);
	printf("Prime numbers are: \n");
	int x = prime(c,t,arr1);
	for (int i = 0; i < x; i++)
	{
		printf("%d ",arr1[i]);
	}
	return 0;
}