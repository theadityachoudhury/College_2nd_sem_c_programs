#include<stdio.h>

int main(){
    int o,p;
    printf("Enter the order of the matrix: ");
    scanf("%d %d",&o,&p);
    int n[o][p],z[o][p];
    int i,j,t=0;
    for(i=0;i<o;i++){
        for(j=0;j<p;j++){
            printf("Enter the number to create matrix: ");
            scanf("%d",&n[i][j]);
        }
    }

    printf("Original matrix is: \n");

    for(i=0;i<o;i++){
        for(j=0;j<p;j++){
            printf("%d ",n[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<o;i++){
        for(j=0;j<p;j++){
            z[i][j]=((i+j)*(n[i][j]));
        }
    }

    printf("Updated matrix is:\n");

    for(i=0;i<o;i++){
        for(j=0;j<p;j++){
            printf("%d ",z[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}