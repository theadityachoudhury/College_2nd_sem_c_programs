// #include<stdio.h>

// void main(){
//     int a[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
//     int *ptra;
//     ptra = a;
//     printf("%d\n",ptra);
//     printf("%d\n",a);
//     printf("%d\n",*a);
//     printf("%d\n",*ptra);
//     printf("%d\n",&ptra);
//     printf("%d\n",&a);
//     printf("%d\n",&a+1);
//     printf("%d\n",ptra+1);
//     printf("%d\n",a+1);
//     printf("%d\n",*a+1);
//     printf("%d\n",*ptra+1);
// }



#include<stdio.h>

void main(){
    int a[4][3] = {5,9,1,7,2,0,3,4,6,8,2,7};
    printf("%u\n",&a);
    printf("%u\n",*&a);
    printf("%u\n",*a);
    printf("%u\n",**a);
    printf("%d\n",a[2][1]);
    printf("%d\n",a[3][2]);
}