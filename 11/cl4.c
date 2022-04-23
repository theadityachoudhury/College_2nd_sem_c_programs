#include <stdio.h>

void fact(){
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.\n");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }
}

void pal(){
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
        printf("Given number is a palindrome.\n");
    }
    else
    {
        printf("Given number is not a palindrome.\n");
    }
}

void oe(){
    int n;
    printf("Enter a number:- ");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("%d is an even number!\n",n);
    }
    else printf("%d is an odd number!\n",n);
    
}

void main(){
    int choice=0;
    do
    {    
        printf("Choose the operation to be done from the list given below:- \n 1. Factorial Of a numebr \n 2. palindrome of a number \n 3. Odd Or Even\n 4. To exit the program\n");
        printf("Enter your chocie:- ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            fact();
            printf("\n");
            break;
        case 2:
            pal();
            printf("\n");
            break;
        case 3:
            oe();
            printf("\n");
            break;
        case 4:
            printf("Program terminating!");
            break;
        default:
            printf("The option you chose didn't exist! Please try again with correct options!\n");
            break;
        }
    } while (choice!=4);
}