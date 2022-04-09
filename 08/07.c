#include <stdio.h>
void main()
{
    int p,c,m,e,b,per;
    printf("Enter marks in the five subjects:- ");
    scanf("%d %d %d %d %d",&p,&c,&m,&b,&e);
    per = (int)(p+c+m+e+b+4.9)/5;
    if (per>=60){
        printf("First division!");
    }
    else{
        if (per>=50){
            printf("Second Division");
        }
        else{
            if (per>=40){
                printf("Third Division");
            }
            else{
                printf("Fail");
            }
        }
    }
}