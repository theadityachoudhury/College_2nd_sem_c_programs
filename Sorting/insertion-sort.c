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
    
    for (int i = 0; i < (n); i++)
    {
        int value = arr[i];
        int j = i-1;
        while (j>=0 && value<arr[j])
        {
            arr[j+1] = arr[j];
            j-=1;
        }
        arr[j+1] = value;
        
        
    }

    for (int h = 0; h < n; h++)
    {
        printf("%d ",arr[h]);
    }
    
}