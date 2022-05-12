// #include <stdio.h>
// void main()
// {
//     int a,b,c;
//     float avg;
//     printf("Enter first number:- ");
//     scanf("%d",&a);
//     printf("Enter second number:- ");
//     scanf("%d",&b);
//     printf("Enter third number:- ");
//     scanf("%d",&c);
//     avg = (float)(a+b+c)/3;
//     printf("Average of %d %d and %d is %f",a,b,c,avg);
// } 


// #include<stdio.h>
// void main(){
//     printf("%d",printf("Hello"));
//     char i='0';
//     switch(i){
//         case '0':
//         i+2;
//         case '1':
//         i+3;
//         break;
//         default:
//         i+5;
//     }
//     printf("\n%d", i);
// }


#include <stdio.h>
int main()
{
	int i = 0, j = 0;
	while (i<5 && j<10)
	{
		i++;
		j++;
	}
	printf("%d %d", i, j);
}
