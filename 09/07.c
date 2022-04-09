#include <stdio.h>
void main()
{
    float temp,tc;
    int n;
    printf("Enter the number of values:- ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %dth temperature(in fahrenhite):- ",i+1);
        scanf("%f",&temp);
        tc = ((temp-32)*5)/9; 
        printf("The temperature in celsius is:- %f\n",tc);

    }
    
}