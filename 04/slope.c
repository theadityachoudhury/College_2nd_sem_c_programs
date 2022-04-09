#include <stdio.h>
void main(){
	float x1,y1,x2,y2,slope;
	printf("Enter the x co-ordinate of first point:- ");
	scanf("%f",&x1);
	printf("Enter the y co-ordinate of first point:- ");
	scanf("%f",&y1);
	printf("Enter the x co-ordinate of second point:- ");
	scanf("%f",&x2);
	printf("Enter the y co-ordinate of second point:- ");
	scanf("%f",&y2);
	slope = ((y2-y1)/(x2-x1));
	printf("The slope of p(%.2f,%.2f) and q(%.2f,%.2f) is %.2f.",x1,y1,x2,y2,slope);
}
