//WA function to find out sum of all elements present in a particular row. pass two parameter , one of the parameter row number is 5 { it will print the elements present in the row 5}



#include<stdio.h>

int sum(int (*pa)[6],int i){
    int sum = 0;
    for (int j = 0; j < 6; j++)
    {
        sum+=(pa[i][j]);
    }
    return sum;
}


int main(){
    int a[6][6],i,s;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
            a[i][j] = j+1;
    }
    printf("Enter the row number:- ");
    scanf("%d",&i);   
    s = sum(a,i);
    printf("The sum of the elements of row %d is %d",i,s);
    

    return 0;
}