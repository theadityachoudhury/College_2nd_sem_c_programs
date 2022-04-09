#include <stdio.h>
void main(){
	int n1,n2;
	float v1,v2;
	printf("Enter the value of primary winding:- ");
	scanf("%d",&n1);
	printf("Enter the value of secondary winding:- ");
	scanf("%d",&n2);
	printf("Enter the value of primary voltage:- ");
	scanf("%f",&v1);
	v2 = (v1*n2)/n1;
	printf("The secondary voltage is %.2f.",v2);
}