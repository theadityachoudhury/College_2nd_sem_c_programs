#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,i=0;
	float *data;
	printf("Enter total number of elements:- ");
	scanf("%d",&n);
	data = (float*) calloc(n,sizeof(float));
    for (i = 1; i <= n; i++)
    {
        printf("Enter number %d:- ",i);
        scanf("%f",data+i);
    }
    for (i = 1; i <= n; i++)
    {
        if((*data)<*(data+i)) *data = *(data+i);
    }
	printf("Largest element is %.2f",*data);
    free(data);
	return 0;	
}