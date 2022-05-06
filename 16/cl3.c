#include <stdio.h>

int main()
{
    int a[8] = {1, 2, 3, 4, 5, 6, 7, 8},sum;
    for (int i = 0; i < 8; i++)
    {
        int *p = a + i;
        sum+=*p;
    }

    printf("The sum of the elements of array is %d",sum);
    return 0;
}