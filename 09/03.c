#include <stdio.h>
void main()
{
    int a,sum=0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter %d variable:- ",i+1);
        scanf("%d",&a);
        if (a%2!=0){
            sum+=a;
        }
    }
    printf("Sum of odd numbers is:- %d",sum);
    
}