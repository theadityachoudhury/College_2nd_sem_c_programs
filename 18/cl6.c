//WA function to return the largest element present in a particular column.



#include<stdio.h>

int largest(int (*pa)[6],int i){
    int largest = pa[0][i];
    for (int j = 0; j < 6; j++)
    {
        if (pa[j][i]>largest) largest = pa[j][i];
    }

    return largest;
}

int main(){
    int a[6][6],l,i;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
            a[i][j] = j+1;
    }
    printf("Enter the column number:- ");
    scanf("%d",&i);
    l = largest(a,i);
    printf("The largest element of the array of column %d is %d",i,l);
    return 0;
}