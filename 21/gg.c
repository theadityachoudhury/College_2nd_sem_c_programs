#include<stdio.h>

void h(int *a){
    for (int i=0;i<5;i++)
    printf("%d\n",a[i]);
}


void main(){
    int arr[5]={1,2,3,4,5};
    h(arr);
    
}