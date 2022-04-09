#include <stdio.h>
void main()
{
    int score,i=1;
    repeat:
    printf("Enter the score of the player %d:- ",i);
    scanf("%d",&score);
    if (score>100){
        printf("Player %d has scored more than 100!");
    }
    if (i<11){
        i++;
        goto repeat;
    }
}