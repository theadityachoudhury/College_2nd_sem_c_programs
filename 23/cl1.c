#include<stdio.h>
void main(){
    FILE *fp;
    int a[10],i,sum=0;
    fp = fopen("data.in","r");
    for (i = 0; i < 10; i++)
    {
        fscanf(fp,"%d",&a[i]);
        sum+=a[i];
    }
    printf("Sum = %d",sum);
    for (i = 9; i >= 0; i--)
    {
        printf("\n%d",a[i]);
    }
    fclose(fp);
    
}