#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,i,sum=0;
	int (*a)[5];
	printf("Enter number of rows:- ");
	scanf("%d",&n);
	a = (int(*)[5]) malloc(n*5*sizeof(int));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("Enter %d%d element:- ",i,j);
			scanf("%d",&a[i][j]);
			sum+=a[i][j];
		}
	}
	printf("The sum of %d elements is %d",5*n,sum);
	return 0;	
}