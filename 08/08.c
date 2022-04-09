#include <stdio.h>
void main()
{
    int score,sum=0,i=1;
    float avg;
    repeat:
    printf("Enter the score of the player %d:- ",i);
    scanf("%d",&score);
    sum+=score;
    i++;
    if (i<11){
        goto repeat;
    }
}