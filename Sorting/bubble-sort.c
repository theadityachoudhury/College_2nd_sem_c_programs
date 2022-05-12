#include<stdio.h>
int main(){
    int arr[50],n,t;
    printf("Enter the length of the array:- ");
    scanf("%d",&n);
    for (int inp = 0; inp < n; inp++)
    {
        printf("Enter %d element of the array:- ",inp+1);
        scanf("%d",&arr[inp]);
    }
    
    for (int i = 0; i < (n-1); i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                t = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
            
        }
        
    }

    for (int h = 0; h < n; h++)
    {
        printf("%d ",arr[h]);
    }
    
}