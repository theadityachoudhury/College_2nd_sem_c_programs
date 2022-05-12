#include <stdio.h>

int main()
{
    int a[6][6];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
            a[i][j] = j+1;
    }

    int(*p)[6];
    p = a;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
            printf("%d\t", p[i][j]);
        printf("\n");
    }
    printf("");
    return 0;
}