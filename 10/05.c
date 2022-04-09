#include <stdio.h>
void main()
{
    long int n, rev_n = 0, org_n;
    printf("Enter the number:- ");
    scanf("%ld", &n);
    org_n = n;
    do
    {
        rev_n = rev_n * 10 + n % 10;
    } while (n = n / 10);
    printf("The revere number is %ld\n", rev_n);
    if (org_n == rev_n)
    {
        printf("Given number is a palindrome.");
    }
    else
    {
        printf("Given number is not a palindrome.");
    }
}