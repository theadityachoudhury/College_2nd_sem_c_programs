//WAP to check how many number of positive numbers in each row

#include<stdio.h>

void countn(int (*pa)[5]){
    int counts = 0;
    for (int i = 0; i < 4; i++)
    {
        counts = 0;
        for (int j = 0; j < 5; j++)
        {
            if (pa[i][j]>0) counts+=1;
        }
        printf("There are %d positive number in row %d\n",counts,i);
    }
}


int main(){
    int a[4][5];
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++)
        a[i][j]= j;
    }
    countn(a);
    return 0;
}