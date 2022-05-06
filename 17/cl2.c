#include <stdio.h>

int large_sum(int *a, int *b, int n)
{
    int i, s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++)
    {
        s1 += a[i];
        s2 += b[i];
    }
    if (s1 == s2)
    {
        return 0;
    }
    else if (s1 > s2)
    {
        return 1;
    }
    else
        {
        return 2;
        }
}
int main()
{
    int x[10]={1,2,3,4,5,6,7,8,9,10}, y[15]={1,2,4,5,6,7,8,9,10,11,12,13,14,15,16}, g;
    g = large_sum(x, y, 10);
    if (g==0)
    {
        printf("Both sums are equal ");
    }
    else
    {
        if (!g)
        {
            printf("sum of 1st array is largest than 2nd");
        }
        else
        {
            printf("sum of 2nd array is largest than 1st");
        }
    }
    return 0;
}