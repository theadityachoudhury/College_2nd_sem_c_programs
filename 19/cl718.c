#include<stdio.h>
void main(){
    int num = 1, n = 5;
    char ch = 'A';
    for (int i = 1; i <= 5; i++)
    {
        for (int h = 0; h < n-i; h++)
        {
            printf(" ");
        }
        if (i%2!=0){
            for (int k = 0; k < i; k++)
            {
                printf("%d ",num++);
            } 
            }
        else {
            for (int j = 0; j < i; j++)
            {
                printf("%c ",ch++);
            }
        }
        printf("\n");    
    }
        
    }
