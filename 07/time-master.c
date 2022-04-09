#include <stdio.h>
void main()
{
    int hh1,mm1,hh2,mm2,diff1,diff2;
    printf("Enter first time:- ");
    scanf("%d:%d",&hh1,&mm1);
    printf("Enter second time:- ");
    scanf("%d:%d",&hh2,&mm2);
    if (hh1>=0 && hh1<24 && hh2>=0 && hh2<24 && mm1>=0 && mm1<61 && mm2>=0 && mm2<61){
        if (hh1-hh2<0){
            printf("%d:%d is smaller than %d:%d\n",hh1,mm1,hh2,mm2);
            if (mm1-mm2==0){
                diff1 = (hh2-hh1);
                diff2 = 0;
            }
            else if (mm1-mm2<0){
                printf("%d:%d is smaller than %d:%d\n",hh1,mm1,hh2,mm2);
                diff1 = (hh2-hh1);
                diff2=(mm2-mm1);
            }
            else{
                printf("%d:%d is smaller than %d:%d\n",hh2,mm2,hh1,mm1);
                diff1=(hh2-hh1);
                diff2=(mm1-mm2);
            }
        }
        else if(hh1-hh2==0 ){
            if (mm1-mm2==0){
                printf("Both times are same\n");
                diff1 = 0;
                diff2 = 0;
            }
            else if (mm1-mm2<0){
                printf("%d:%d is smaller than %d:%d\n",hh1,mm1,hh2,mm2);
                diff1 = 0;
                diff2=(mm2-mm1);
            }
            else{
                printf("%d:%d is smaller than %d:%d\n",hh2,mm2,hh1,mm1);
                diff1 = 0;
                diff2=(mm1-mm2);
            }
            
        }
        else{
            printf("%d:%d is smaller than %d:%d\n",hh2,mm2,hh1,mm1);
            if (mm1-mm2==0){
                diff1 = (hh1-hh2);
                diff2 = 0;
            }
            else if (mm1-mm2<0){
                printf("%d:%d is smaller than %d:%d\n",hh1,mm1,hh2,mm2);
                diff1 = (hh1-hh2);
                diff2=(mm2-mm1);
            }
            else{
                printf("%d:%d is smaller than %d:%d\n",hh2,mm2,hh1,mm1);
                diff1 = (hh1-hh2);
                diff2=(mm1-mm2);
            }
        }
        printf("The difference b/w 2 times is:- %d:%d ",diff1,diff2);
    }
    else{
        printf("You have given wrong range of times!");
    }
}