#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number of rows:- ");
    scanf("%d",&n);
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("A");
        }

        for (int j = 0; j < n-i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)
        {
            printf("A");
        }
        for (int j = 0; j < n-i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)
        {
            printf("A");
        }
        printf("\n");
        
    }
    
}