#include<stdio.h>
void main(){
    int arr1[4]={1,2,3,4}, *ptr,arr2[4];
    for (int i = 3; i >= 0; i--){
        ptr = arr1+i;
        arr2[4-i-1] = *ptr;
        printf("%d ",arr2[4-i-1]);}}