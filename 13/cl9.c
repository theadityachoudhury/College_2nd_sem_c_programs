#include <stdio.h>
int hcf(int n1, int n2) 
{
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}

int main() 
{
    int n1,n2,n3;
    printf("Enter first positive integer: ");
    scanf("%d", &n1);
    printf("Enter second positive integer: ");
    scanf("%d", &n2);
    printf("Enter third positive integer: ");
    scanf("%d", &n3);
    printf("G.C.D of %d %d and %d is %d.",n1,n2,n3,hcf(n1,hcf(n2,n3)));
    return 0;
}